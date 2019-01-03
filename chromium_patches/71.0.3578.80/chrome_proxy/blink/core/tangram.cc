// begin ChromeProxy
#include "chrome_proxy/blink/core/tangram.h"

#include "third_party/blink/public/web/web_local_frame_client.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/local_frame.h"
#include "third_party/blink/renderer/core/frame/web_local_frame_impl.h"
#include "third_party/blink/renderer/core/dom/document.h"

namespace blink {

Tangram::Tangram(LocalFrame* frame) : DOMWindowClient(frame) {

}

Tangram::~Tangram() {}

void Tangram::Trace(blink::Visitor* visitor) {
  EventTargetWithInlineData::Trace(visitor);
  ScriptWrappable::Trace(visitor);
  DOMWindowClient::Trace(visitor);
}

void Tangram::AddedEventListener(const AtomicString& event_type,
                                 RegisteredEventListener& registered_listener) {
  EventTargetWithInlineData::AddedEventListener(event_type,
                                                registered_listener);
}

void Tangram::sendTo(const String& channel, const String& arg1, const String& arg2) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  if (pClient) {
    WebString str = channel;
    std::wstring channel_ = str.Utf16();
    str = arg1;
    std::wstring arg1_ = str.Utf16();
    str = arg2;
    std::wstring arg2_ = str.Utf16();
    pClient->SendTangramMessage(channel_, arg1_, arg2_);
  }
}

void Tangram::sendToAll(const String& arg1, const String& arg2) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  if (pClient) {
    std::wstring channel_ = L"NODE_MESSAGE:ALL";
    WebString str = arg1;
    std::wstring arg1_ = str.Utf16();
    str = arg2;
    std::wstring arg2_ = str.Utf16();
    pClient->SendTangramMessage(channel_, arg1_, arg2_);
  }
}

void Tangram::sendToNode(const String& nodeName, const String& arg1, const String& arg2) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  if (pClient) {
    WebString str = nodeName;
    std::wstring nodeName_ = str.Utf16();
	std::wstring channel_ = L"NODE_MESSAGE:NODE_NAME:" + nodeName_;
    str = arg1;
    std::wstring arg1_ = str.Utf16();
    str = arg2;
    std::wstring arg2_ = str.Utf16();
    pClient->SendTangramMessage(channel_, arg1_, arg2_);
  }
}

void Tangram::sendToNode(int rowNum,
						 int colNum,
                         const String& arg1,
                         const String& arg2) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  if (pClient) {
    std::wostringstream ssChannel_;
    ssChannel_ << L"NODE_MESSAGE:LOCATION:" << rowNum << L":" << colNum;
    std::wstring channel_ = ssChannel_.str();
    ssChannel_.clear();
    WebString str = arg1;
    std::wstring arg1_ = str.Utf16();
    str = arg2;
    std::wstring arg2_ = str.Utf16();
    pClient->SendTangramMessage(channel_, arg1_, arg2_);
  }
}

void Tangram::sendMessage(ScriptState*,
                          const String& strContent,
                          const base::Optional<Vector<ScriptValue>>& arguments,
                          ExceptionState& exceptionstate) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  if (pClient) {
    WebString str = strContent;
    pClient->sendMessage(str.Utf16(), (void*)&arguments,
                         (void*)&exceptionstate);
  }
}

void Tangram::extend(const String& layerName,
                     const String& layerXML,
                     const String& features) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  WebString str = layerXML;
  std::wstring xmlstring_ = str.Utf16();
  str = layerName;
  std::wstring keyname_ = str.Utf16();
  str = features;
  std::wstring window_features_string_ = str.Utf16();
  pClient->OnTangramExtend(xmlstring_, keyname_, window_features_string_);
}

void Tangram::extend(const String& nodeName, 
					 const String& layerName,
                     const String& layerXML,
                     const String& features) {
  WebLocalFrameClient* pClient =
      WebLocalFrameImpl::FromFrame(GetFrame())->Client();
  if (pClient) {
    WebString str = nodeName;
    std::wstring nodeName_ = str.Utf16();
    str = layerName;
    std::wstring layerName_ = str.Utf16();
    std::wostringstream ssChannel_;
    ssChannel_ << L"EXTEND_NODE:FRAME_NAME:CURRENT_TAB:NODE_NAME:" << nodeName_ << ":LAYER:" << layerName_;
    std::wstring channel_ = ssChannel_.str();
    ssChannel_.clear();
    str = layerXML;
    std::wstring layerXML_ = str.Utf16();
    str = features;
    std::wstring features_ = str.Utf16();
    pClient->SendTangramMessage(channel_, layerXML_, features_);
  }
}

const AtomicString& Tangram::InterfaceName() const {
  return EventTargetNames::TangramMsg;
}

ExecutionContext* Tangram::GetExecutionContext() const {
  return DomWindow()->document();
}

}  // namespace blink
   // end ChromeProxy
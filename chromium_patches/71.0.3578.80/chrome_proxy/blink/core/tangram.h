// begin ChromeProxy
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_TANGRAM_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_TANGRAM_H_

#include <map>

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/transferables.h"
#include "third_party/blink/renderer/core/dom/context_lifecycle_observer.h"
#include "third_party/blink/renderer/core/dom/events/event_target.h"

#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/assertions.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"

namespace blink {

using namespace std;

class LocalFrame;
class ExceptionState;
class Document;
class ScriptState;
class SerializedScriptValue;

// This class corresponds to the Tangram interface.
// stt step 10 ?
// This class corresponds to the Tangram interface.
// We created an additional tangram object in the js environment, The spec is
// defined here: tangram.idl
//
// This class is the implementation of tangram in the C++ layer. This class has
// the following important base classes? -EventTarget?Decide that this class
// is an event dispatch class, which is a DOM event target?
//  to make your class an EventTarget?Inherit from EventTargetWithInlineData
//  The dispatchEvent function is an event dispatch function that dispatches a
//  tangram event to a tangram object, for which we need to create a tangram
//  event. Detailed description of the tangram event in step 11
// -ScriptWrappable ?Decide that this class is a script wrapper class.
//  ScriptWrappable provides a way to map from / to C++ DOM implementation
//  to/from JavaScript object (platform object).
//
// Why do we create this class instead of expanding it directly on the window
// object? -In order to speed up the compilation speed
//  direct expansion in the window will result in too much compilation,
//  because LocalDomWindow is used in many files, once modified, it will
//  cause more than 6,000 files to be recompiled, the compilation time is too
//  long
// -the specification namespace,
//  In summary, the tangram related content is separated from the
//  localdomwindow, create this class.
//
// The tangram object allows the user
// -to create a tangram extension window from the js layer.
// -supporting data transfer with the tangram extension window.
//
class CORE_EXPORT Tangram final : public EventTargetWithInlineData,
                                  // public ContextLifecycleObserver,
                                  public DOMWindowClient {
  DEFINE_WRAPPERTYPEINFO();
  USING_GARBAGE_COLLECTED_MIXIN(Tangram);

 public:
  std::map<std::wstring, __int64> m_mapNode;

  static Tangram* Create(LocalFrame* frame) { return new Tangram(frame); }
  static bool CanTransferArrayBuffersAndImageBitmaps() { return true; }

  void Trace(blink::Visitor*) override;

  // Called when an event listener has been successfully added.
  void AddedEventListener(const AtomicString& event_type,
                          RegisteredEventListener&) override;

  DEFINE_MAPPED_ATTRIBUTE_EVENT_LISTENER(MessageReceived, tangrammsg)

  void extend(const String& layerName, const String& layerXML, const String& features);

  void extend(const String& nodeName, const String& layerName, const String& layerXML, const String& features);

  void sendTo(const String& channel, const String& arg1, const String& arg2);

  void sendToAll(const String& arg1, const String& arg2);

  void sendToNode(const String& nodeName, const String& arg1, const String& arg2);

  void sendToNode(int rowNum, int colNum, const String& arg1, const String& arg2);

  void sendMessage(ScriptState*,
                   const String& strContent,
                   const base::Optional<Vector<ScriptValue>>& arguments,
                   ExceptionState&);

  // EventTarget overrides:
  const AtomicString& InterfaceName() const override;
  ExecutionContext* GetExecutionContext() const override;

 private:
  explicit Tangram(LocalFrame*);
  ~Tangram() override;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_TANGRAM_H_
        // end ChromeProxy
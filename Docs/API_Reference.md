# API 参考手册

## Contents

- NET API
  - Node对象
    - Frame：当前节点的Frame
    - HostNode：当前节点所在层的Host节点（浏览器环境下为当前网页）
    - （未实现）HostFrame：当前节点对应的Frame（仅在该节点Extend之后有值）
    - Extend(layerName, layerXML)：对当前节点进行再次扩展（仅在非容器节点上生效）
    - SendToAll(arg1, arg2)：发送到当前节点所在层的所有其它节点
    - （未实现）SendToNode(nodeName, arg1, arg2)：发送到当前节点所在层的指定名称节点
    - （未实现）SendToNode(rowNum, colNum, arg1, arg2): 发送到当前节点所在层的指定行列节点
    - SendToHostNode(arg1, arg2)：发送到当前节点所在层的Host节点
    - event OnMessageReceived(arg1, arg2)：接收发送到当前节点的消息
    - （未实现）SendToNode(frameName, nodeName, arg1, arg2)：发送到指定名称Frame的可见层中的指定名称节点
    - （未实现）SendToNode(frameName, rowNum, colNum, arg1, arg2)：发送到指定名称Frame的可见层中的指定行列节点
    - （未实现）SendToHostNode(frameName, arg1, arg2)：发送到指定名称Frame的可见层中的Host节点
  - Frame对象
    - （未实现）Extend(layerName, layerXML)：使用指定的层名对当前Frame进行扩展，如果传入已使用的层名，则忽略层XML，切换到对应的层
    - （未实现）ExtendNode(nodeName, layerName, layerXML)：对Frame的当前可见层中指定名称节点进行扩展
    - （未实现）ExtendNode(rowNum, colNum, layerName, layerXML)：对Frame的当前可见层中指定行列节点进行扩展
    - （未实现）SendToAll(arg1, arg2)：发送到Frame的当前可见层中所有节点
    - （未实现）SendToNode(nodeName, arg1, arg2)：发送到Frame的当前可见层中的指定名称节点
    - （未实现）SendToNode(rowNum, colNum, arg1, arg2)：发送到Frame的当前可见层中的指定行列节点
    - SendToHostNode(arg1, arg2)：发送到Frame的当前可见层中的Host节点
  - Tangram全局对象
    - LoadCLRResource(destObj, resourceName)：读取NET程序集的指定名称资源
    - （未实现）GetNode(obj)：获取NET控件对应的Node对象
- NET API（浏览器扩展部分）
  - Node对象
    - Browser：当前节点所在的Browser对象
    - （未实现）WebContents：当前节点所在的WebContents对象
  - Frame对象
    - （未实现）Browser：当前Frame所在的Browser对象
    - （未实现）WebContents：当前Frame所在的WebContents对象
  - Browser对象
    - OpenURL(url, disposition, layerName, layerXML)：使用指定Disposition打开URL，并使用传入的layerXML对页面进行扩展
  - WebContents对象
    - TODO
  - Tangram全局对象
    - ActiveBrowser：当前进行的激活浏览器窗口对象
- JS API
  - （未实现）tangram.sendTo(channel, arg1, arg2)：发送自定义消息（待实现）
  - （未实现）tangram.sendToAll(arg1, arg2)：发送到当前页面关联Frame的所有节点
  - tangram.sendToNode(nodeName, arg1, arg2)：发送到当前页面关联Frame中的指定名称节点
  - （未实现）tangram.sendToNode(rowNum, colNum, arg1, arg2)：发送到当前页面关联Frame中的指定行列节点
  - tangram.extend(layerName, layerXML, features)：对当前页面关联的Frame进行扩展
  - （未实现）tangram.extendNode(nodeName, layerName, layerXML, features)：对当前页面关联Frame中的指定名称节点进行再扩展
  - （未实现）tangram.extendNode(rowNum, colNum, layerName, layerXML, features)：对当前页面关联Frame中的指定行列节点进行再扩展
  - tangram.onMessageReceived：接收发送到当前页面的消息

## NET API

### Node

现阶段，Tangram可以对一个指定的区域（Frame）进行Extend。使用标签页控件或者Splitter控件对该区域进行几何分割。将该区域切分为大小不等的多个单元格。Tangram称每个单元格为一个Node。开发者可以指定其中的某个Node用来放置该区域（Frame）的原始物件。Tangram称这个Node为Host Node。同时，用来进行布局的标签页控件和Splitter控件分别对应Tabbed和Splitter类型的Node。这种特殊的Node称为容器Node。最终，Tangram使用一棵由Node构成的树结构形成用户的可见区域。一个Node树结构类似这样

```
<tangram>
  <window>
    <node id='splitter' name='container' rows='2' cols='1' height ='500,500,' width='500,' middlecolor='RGB(255,255,255)'>
      <node id='splitter' name='container' rows='1' cols='2' height ='500,' width='500,500,' middlecolor='RGB(255,255,255)'>
        <node name='host' caption='host' id='hostview'/>
        <node name='launcher' id='ClrCtrl' cnnid='...' caption='' />
      </node>
      <node name='launcher' id='ClrCtrl' cnnid='...' caption='' />
    </node>
  </window>
</tangram>
```

同时，Tangram允许嵌套的Frame。即针对某个Node再次进行Extend，形成一个类似于上面的完整结构。如果用XML来描述，类似于这样

```
<tangram>
  <window>
    <node id='splitter' name='container' rows='2' cols='1' height ='500,500,' width='500,' middlecolor='RGB(255,255,255)'>
      <node id='splitter' name='container' rows='1' cols='2' height ='500,' width='500,500,' middlecolor='RGB(255,255,255)'>
        <node name='host' caption='host' id='hostview'/>
        <layer>
          <window>
            <node id='splitter' name='container' rows='2' cols='1' height ='500,500,' width='500,' middlecolor='RGB(255,255,255)'>
              <node name='host' caption='host' id='hostview'/>
              <node name='launcher' id='ClrCtrl' cnnid='...' caption=''/>
            </node>
          </window>
        </layer>
        </node>
      <node name='launcher' id='ClrCtrl' cnnid='...' caption=''/>
    </node>
  </window>
</tangram>
```

#### Frame

获取当前Node所在的Frame对象

#### HostNode

获取当前Node所在Layer中的HostNode

#### HostFrame

获取当前Node再扩展之后对应的Frame对象，该属性只有在Node被Extend之后才能正确获取值，其它情况下均返回NULL。

#### Extend(layerName, layerXML)

使用指定的层名称（layerName）和层布局（layerXML）对当前节点进行扩展。该方法仅在非容器节点（非Tabbed和Splitter类型Node）上生效。每次执行该方法，Tangram会使用提供的layerXML对当前Node区域进行Extend。并将当前的布局状态以layerName作为索引保存。当使用相同的layerName再次Extend时，Tangram会忽略传入的layerXML，并通过layerName查找并恢复到之前的布局状态。

- layerName：一个用来标识Layer布局的字符串

- layerXML：描述Layer布局的XML字符串，类似于下面

```
<tangram>
  <window>
    <node id='splitter' name='container' rows='2' cols='1' height ='500,500,' width='500,' middlecolor='RGB(255,255,255)'>
      <node name='host' caption='host' id='hostview'/>
      <node name='launcher' id='ClrCtrl' cnnid='...' caption='' />
    </node>
  </window>
</tangram>
```

#### SendToAll(arg1, arg2)

...


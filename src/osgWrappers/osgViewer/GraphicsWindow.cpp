// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/GraphicsContext>
#include <osg/Object>
#include <osgGA/EventQueue>
#include <osgViewer/GraphicsWindow>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgViewer::GraphicsWindow::MouseCursor)
	I_DeclaringFile("osgViewer/GraphicsWindow");
	I_EnumLabel(osgViewer::GraphicsWindow::InheritCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::NoCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::RightArrowCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::LeftArrowCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::InfoCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::DestroyCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::HelpCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::CycleCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::SprayCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::WaitCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::TextCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::CrosshairCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::UpDownCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::LeftRightCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::TopSideCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::BottomSideCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::LeftSideCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::RightSideCursor);
	I_EnumLabel(osgViewer::GraphicsWindow::TopLeftCorner);
	I_EnumLabel(osgViewer::GraphicsWindow::TopRightCorner);
	I_EnumLabel(osgViewer::GraphicsWindow::BottomRightCorner);
	I_EnumLabel(osgViewer::GraphicsWindow::BottomLeftCorner);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgViewer::GraphicsWindow)
	I_DeclaringFile("osgViewer/GraphicsWindow");
	I_BaseType(osg::GraphicsContext);
	I_BaseType(osgGA::GUIActionAdapter);
	I_Constructor0(____GraphicsWindow,
	               "",
	               "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, object,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setEventQueue, IN, osgGA::EventQueue *, eventQueue,
	          Properties::NON_VIRTUAL,
	          __void__setEventQueue__osgGA_EventQueue_P1,
	          "",
	          "");
	I_Method0(osgGA::EventQueue *, getEventQueue,
	          Properties::NON_VIRTUAL,
	          __osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method0(const osgGA::EventQueue *, getEventQueue,
	          Properties::NON_VIRTUAL,
	          __C5_osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method0(void, checkEvents,
	          Properties::VIRTUAL,
	          __void__checkEvents,
	          "",
	          "");
	I_Method4(void, setWindowRectangle, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__setWindowRectangle__int__int__int__int,
	          "Set the window's position and size. ",
	          "");
	I_Method4(bool, setWindowRectangleImplementation, IN, int, x, IN, int, x, IN, int, x, IN, int, x,
	          Properties::VIRTUAL,
	          __bool__setWindowRectangleImplementation__int__int__int__int,
	          "implementation of setWindowRectangle, should be implemented by derived classes ",
	          "");
	I_Method4(void, getWindowRectangle, IN, int &, x, IN, int &, y, IN, int &, width, IN, int &, height,
	          Properties::VIRTUAL,
	          __void__getWindowRectangle__int_R1__int_R1__int_R1__int_R1,
	          "Get the window's position and size. ",
	          "");
	I_Method1(void, setWindowDecoration, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setWindowDecoration__bool,
	          "Set Window decoration. ",
	          "");
	I_Method1(bool, setWindowDecorationImplementation, IN, bool, x,
	          Properties::VIRTUAL,
	          __bool__setWindowDecorationImplementation__bool,
	          "implementation of setWindowDecoration, should be implemented by derived classes ",
	          "");
	I_Method0(bool, getWindowDecoration,
	          Properties::VIRTUAL,
	          __bool__getWindowDecoration,
	          "Set Window decoration. ",
	          "");
	I_Method0(void, grabFocus,
	          Properties::VIRTUAL,
	          __void__grabFocus,
	          "Get focus. ",
	          "");
	I_Method0(void, grabFocusIfPointerInWindow,
	          Properties::VIRTUAL,
	          __void__grabFocusIfPointerInWindow,
	          "Get focus on if the pointer is in this window. ",
	          "");
	I_Method1(void, setWindowName, IN, const std::string &, x,
	          Properties::VIRTUAL,
	          __void__setWindowName__C5_std_string_R1,
	          "Set the name of the window. ",
	          "");
	I_Method0(std::string, getWindowName,
	          Properties::VIRTUAL,
	          __std_string__getWindowName,
	          "Return the name of the window. ",
	          "");
	I_Method1(void, useCursor, IN, bool, cursorOn,
	          Properties::VIRTUAL,
	          __void__useCursor__bool,
	          "Switch on/off the cursor. ",
	          "");
	I_Method1(void, setCursor, IN, osgViewer::GraphicsWindow::MouseCursor, x,
	          Properties::VIRTUAL,
	          __void__setCursor__MouseCursor,
	          "Set mouse cursor to a specific shape. ",
	          "");
	I_Method0(bool, valid,
	          Properties::VIRTUAL,
	          __bool__valid,
	          "Return whether a valid and usable GraphicsContext has been created. ",
	          "");
	I_Method0(bool, realizeImplementation,
	          Properties::VIRTUAL,
	          __bool__realizeImplementation,
	          "Realise the GraphicsContext implementation, Pure virtual - must be implemented by concrate implementations of GraphicsContext. ",
	          "");
	I_Method0(bool, isRealizedImplementation,
	          Properties::VIRTUAL,
	          __bool__isRealizedImplementation,
	          "Return true if the graphics context has been realised, and is ready to use, implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, closeImplementation,
	          Properties::VIRTUAL,
	          __void__closeImplementation,
	          "Close the graphics context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(bool, makeCurrentImplementation,
	          Properties::VIRTUAL,
	          __bool__makeCurrentImplementation,
	          "Make this graphics context current implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method1(bool, makeContextCurrentImplementation, IN, osg::GraphicsContext *, x,
	          Properties::VIRTUAL,
	          __bool__makeContextCurrentImplementation__GraphicsContext_P1,
	          "Make this graphics context current with specified read context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(bool, releaseContextImplementation,
	          Properties::VIRTUAL,
	          __bool__releaseContextImplementation,
	          "Release the graphics context. ",
	          "");
	I_Method1(void, bindPBufferToTextureImplementation, IN, GLenum, x,
	          Properties::VIRTUAL,
	          __void__bindPBufferToTextureImplementation__GLenum,
	          "Pure virtual, Bind the graphics context to associated texture implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, swapBuffersImplementation,
	          Properties::VIRTUAL,
	          __void__swapBuffersImplementation,
	          "Swap the front and back buffers implementation. ",
	          "Pure virtual - must be implemented by Concrate implementations of GraphicsContext. ");
	I_Method0(void, requestRedraw,
	          Properties::VIRTUAL,
	          __void__requestRedraw,
	          "requestRedraw() requests a single redraw. ",
	          "");
	I_MethodWithDefaults1(void, requestContinuousUpdate, IN, bool, x, true,
	                      Properties::VIRTUAL,
	                      __void__requestContinuousUpdate__bool,
	                      "requestContinousUpdate(bool) is for en/disabling a throw or idle callback to be requested by a GUIEventHandler (typically a MatrixManipulator, though other GUIEventHandler's may also provide functionality). ",
	                      "GUI toolkits can respond to this immediately by registering an idle/timed callback, or can delay setting the callback and update at their own leisure. ");
	I_Method2(void, requestWarpPointer, IN, float, x, IN, float, x,
	          Properties::VIRTUAL,
	          __void__requestWarpPointer__float__float,
	          "requestWarpPointer(int,int) is requesting a repositioning of the mouse pointer to a specified x,y location on the window. ",
	          "This is used by some camera manipulators to initialise the mouse pointer when mouse position relative to a controls neutral mouse position is required, i.e when mimicking a aircrafts joystick. ");
	I_SimpleProperty(osgViewer::GraphicsWindow::MouseCursor, Cursor, 
	                 0, 
	                 __void__setCursor__MouseCursor);
	I_SimpleProperty(osgGA::EventQueue *, EventQueue, 
	                 __osgGA_EventQueue_P1__getEventQueue, 
	                 __void__setEventQueue__osgGA_EventQueue_P1);
	I_SimpleProperty(bool, WindowDecoration, 
	                 __bool__getWindowDecoration, 
	                 __void__setWindowDecoration__bool);
	I_SimpleProperty(bool, WindowDecorationImplementation, 
	                 0, 
	                 __bool__setWindowDecorationImplementation__bool);
	I_SimpleProperty(std::string, WindowName, 
	                 __std_string__getWindowName, 
	                 __void__setWindowName__C5_std_string_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgViewer::GraphicsWindowEmbedded)
	I_DeclaringFile("osgViewer/GraphicsWindow");
	I_BaseType(osgViewer::GraphicsWindow);
	I_ConstructorWithDefaults1(IN, osg::GraphicsContext::Traits *, traits, 0,
	                           Properties::NON_EXPLICIT,
	                           ____GraphicsWindowEmbedded__osg_GraphicsContext_Traits_P1,
	                           "",
	                           "");
	I_Constructor4(IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	               ____GraphicsWindowEmbedded__int__int__int__int,
	               "",
	               "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, object,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(void, init,
	          Properties::NON_VIRTUAL,
	          __void__init,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::VIRTUAL,
	          __bool__valid,
	          "Return whether a valid and usable GraphicsContext has been created. ",
	          "");
	I_Method0(bool, realizeImplementation,
	          Properties::VIRTUAL,
	          __bool__realizeImplementation,
	          "Realise the GraphicsContext implementation, Pure virtual - must be implemented by concrate implementations of GraphicsContext. ",
	          "");
	I_Method0(bool, isRealizedImplementation,
	          Properties::VIRTUAL,
	          __bool__isRealizedImplementation,
	          "Return true if the graphics context has been realised, and is ready to use, implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, closeImplementation,
	          Properties::VIRTUAL,
	          __void__closeImplementation,
	          "Close the graphics context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(bool, makeCurrentImplementation,
	          Properties::VIRTUAL,
	          __bool__makeCurrentImplementation,
	          "Make this graphics context current implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(bool, releaseContextImplementation,
	          Properties::VIRTUAL,
	          __bool__releaseContextImplementation,
	          "Release the graphics context. ",
	          "");
	I_Method0(void, swapBuffersImplementation,
	          Properties::VIRTUAL,
	          __void__swapBuffersImplementation,
	          "Swap the front and back buffers implementation. ",
	          "Pure virtual - must be implemented by Concrate implementations of GraphicsContext. ");
	I_Method0(void, grabFocus,
	          Properties::VIRTUAL,
	          __void__grabFocus,
	          "Get focus. ",
	          "");
	I_Method0(void, grabFocusIfPointerInWindow,
	          Properties::VIRTUAL,
	          __void__grabFocusIfPointerInWindow,
	          "Get focus on if the pointer is in this window. ",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgViewer::GraphicsWindowFunctionProxy)
	I_DeclaringFile("osgViewer/GraphicsWindow");
	I_Constructor1(IN, CGraphicsWindowFunction, function,
	               Properties::NON_EXPLICIT,
	               ____GraphicsWindowFunctionProxy__CGraphicsWindowFunction,
	               "",
	               "");
END_REFLECTOR


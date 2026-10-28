#pragma once
#include "Basic.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK {

// Class: CoreUObject.Interface
class Interface : public Object {
public:
};

// Class: CoreUObject.GCObjectReferencer
class GCObjectReferencer : public Object {
public:
};

// Class: CoreUObject.TextBuffer
class TextBuffer : public Object {
public:
};

// Class: CoreUObject.Field
class Field : public Object {
public:
};

// Class: CoreUObject.Struct
class Struct : public Field {
public:
};

// Class: CoreUObject.ScriptStruct
class ScriptStruct : public Struct {
public:
};

// Class: CoreUObject.Package
class Package : public Object {
public:
};

// Class: CoreUObject.Class
class Class : public Struct {
public:
};

// Class: CoreUObject.Function
class Function : public Struct {
public:
};

// Class: CoreUObject.DelegateFunction
class DelegateFunction : public Function {
public:
};

// Class: CoreUObject.DynamicClass
class DynamicClass : public Class {
public:
};

// Class: CoreUObject.PackageMap
class PackageMap : public Object {
public:
};

// Class: CoreUObject.Enum
class Enum : public Field {
public:
};

// Class: CoreUObject.LinkerPlaceholderClass
class LinkerPlaceholderClass : public Class {
public:
};

// Class: CoreUObject.LinkerPlaceholderExportObject
class LinkerPlaceholderExportObject : public Object {
public:
};

// Class: CoreUObject.LinkerPlaceholderFunction
class LinkerPlaceholderFunction : public Function {
public:
};

// Class: CoreUObject.MetaData
class MetaData : public Object {
public:
};

// Class: CoreUObject.ObjectRedirector
class ObjectRedirector : public Object {
public:
};

// Class: CoreUObject.Property
class Property : public Field {
public:
};

// Class: CoreUObject.NumericProperty
class NumericProperty : public Property {
public:
};

// Class: CoreUObject.ArrayProperty
class ArrayProperty : public Property {
public:
};

// Class: CoreUObject.ObjectPropertyBase
class ObjectPropertyBase : public Property {
public:
};

// Class: CoreUObject.AssetObjectProperty
class AssetObjectProperty : public ObjectPropertyBase {
public:
};

// Class: CoreUObject.AssetClassProperty
class AssetClassProperty : public AssetObjectProperty {
public:
};

// Class: CoreUObject.BoolProperty
class BoolProperty : public Property {
public:
};

// Class: CoreUObject.ByteProperty
class ByteProperty : public NumericProperty {
public:
};

// Class: CoreUObject.ObjectProperty
class ObjectProperty : public ObjectPropertyBase {
public:
};

// Class: CoreUObject.ClassProperty
class ClassProperty : public ObjectProperty {
public:
};

// Class: CoreUObject.DelegateProperty
class DelegateProperty : public Property {
public:
};

// Class: CoreUObject.DoubleProperty
class DoubleProperty : public NumericProperty {
public:
};

// Class: CoreUObject.FloatProperty
class FloatProperty : public NumericProperty {
public:
};

// Class: CoreUObject.IntProperty
class IntProperty : public NumericProperty {
public:
};

// Class: CoreUObject.Int16Property
class Int16Property : public NumericProperty {
public:
};

// Class: CoreUObject.Int64Property
class Int64Property : public NumericProperty {
public:
};

// Class: CoreUObject.Int8Property
class Int8Property : public NumericProperty {
public:
};

// Class: CoreUObject.InterfaceProperty
class InterfaceProperty : public Property {
public:
};

// Class: CoreUObject.LazyObjectProperty
class LazyObjectProperty : public ObjectPropertyBase {
public:
};

// Class: CoreUObject.MapProperty
class MapProperty : public Property {
public:
};

// Class: CoreUObject.MulticastDelegateProperty
class MulticastDelegateProperty : public Property {
public:
};

// Class: CoreUObject.NameProperty
class NameProperty : public Property {
public:
};

// Class: CoreUObject.StrProperty
class StrProperty : public Property {
public:
};

// Class: CoreUObject.StructProperty
class StructProperty : public Property {
public:
};

// Class: CoreUObject.UInt16Property
class UInt16Property : public NumericProperty {
public:
};

// Class: CoreUObject.UInt32Property
class UInt32Property : public NumericProperty {
public:
};

// Class: CoreUObject.UInt64Property
class UInt64Property : public NumericProperty {
public:
};

// Class: CoreUObject.WeakObjectProperty
class WeakObjectProperty : public ObjectPropertyBase {
public:
};

// Class: CoreUObject.TextProperty
class TextProperty : public Property {
public:
};

// Class: CoreUObject.Default__Class
class Default__Class : public UObject {
public:
};

} // namespace SDK

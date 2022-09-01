// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package cpp

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	scope0 "thrift/annotation/scope"
	thrift1 "thrift/annotation/thrift"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = scope0.GoUnusedProtection__
var _ = thrift1.GoUnusedProtection__
var GoUnusedProtection__ int;

type RefType int64
const (
  RefType_Unique RefType = 0
  RefType_Shared RefType = 1
  RefType_SharedMutable RefType = 2
)

var RefTypeToName = map[RefType]string {
  RefType_Unique: "Unique",
  RefType_Shared: "Shared",
  RefType_SharedMutable: "SharedMutable",
}

var RefTypeToValue = map[string]RefType {
  "Unique": RefType_Unique,
  "Shared": RefType_Shared,
  "SharedMutable": RefType_SharedMutable,
}

var RefTypeNames = []string {
  "Unique",
  "Shared",
  "SharedMutable",
}

var RefTypeValues = []RefType {
  RefType_Unique,
  RefType_Shared,
  RefType_SharedMutable,
}

func (p RefType) String() string {
  if v, ok := RefTypeToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func RefTypeFromString(s string) (RefType, error) {
  if v, ok := RefTypeToValue[s]; ok {
    return v, nil
  }
  return RefType(0), fmt.Errorf("not a valid RefType string")
}

func RefTypePtr(v RefType) *RefType { return &v }

// Attributes:
//  - Type
type Ref struct {
  Type RefType `thrift:"type,1" db:"type" json:"type"`
}

func NewRef() *Ref {
  return &Ref{}
}


func (p *Ref) GetType() RefType {
  return p.Type
}
type RefBuilder struct {
  obj *Ref
}

func NewRefBuilder() *RefBuilder{
  return &RefBuilder{
    obj: NewRef(),
  }
}

func (p RefBuilder) Emit() *Ref{
  return &Ref{
    Type: p.obj.Type,
  }
}

func (r *RefBuilder) Type(type_a1 RefType) *RefBuilder {
  r.obj.Type = type_a1
  return r
}

func (r *Ref) SetType(type_a1 RefType) *Ref {
  r.Type = type_a1
  return r
}

func (p *Ref) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Ref)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    temp := RefType(v)
    p.Type = temp
  }
  return nil
}

func (p *Ref) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Ref"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Ref) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("type", thrift.I32, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:type: ", p), err) }
  if err := oprot.WriteI32(int32(p.Type)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.type (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:type: ", p), err) }
  return err
}

func (p *Ref) String() string {
  if p == nil {
    return "<nil>"
  }

  typeVal := fmt.Sprintf("%v", p.Type)
  return fmt.Sprintf("Ref({Type:%s})", typeVal)
}

// Attributes:
//  - Ref
type Lazy struct {
  Ref bool `thrift:"ref,1" db:"ref" json:"ref"`
}

func NewLazy() *Lazy {
  return &Lazy{}
}


func (p *Lazy) GetRef() bool {
  return p.Ref
}
type LazyBuilder struct {
  obj *Lazy
}

func NewLazyBuilder() *LazyBuilder{
  return &LazyBuilder{
    obj: NewLazy(),
  }
}

func (p LazyBuilder) Emit() *Lazy{
  return &Lazy{
    Ref: p.obj.Ref,
  }
}

func (l *LazyBuilder) Ref(ref bool) *LazyBuilder {
  l.obj.Ref = ref
  return l
}

func (l *Lazy) SetRef(ref bool) *Lazy {
  l.Ref = ref
  return l
}

func (p *Lazy) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Lazy)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadBool(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Ref = v
  }
  return nil
}

func (p *Lazy) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Lazy"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Lazy) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("ref", thrift.BOOL, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:ref: ", p), err) }
  if err := oprot.WriteBool(bool(p.Ref)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.ref (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:ref: ", p), err) }
  return err
}

func (p *Lazy) String() string {
  if p == nil {
    return "<nil>"
  }

  refVal := fmt.Sprintf("%v", p.Ref)
  return fmt.Sprintf("Lazy({Ref:%s})", refVal)
}

type DisableLazyChecksum struct {
}

func NewDisableLazyChecksum() *DisableLazyChecksum {
  return &DisableLazyChecksum{}
}

type DisableLazyChecksumBuilder struct {
  obj *DisableLazyChecksum
}

func NewDisableLazyChecksumBuilder() *DisableLazyChecksumBuilder{
  return &DisableLazyChecksumBuilder{
    obj: NewDisableLazyChecksum(),
  }
}

func (p DisableLazyChecksumBuilder) Emit() *DisableLazyChecksum{
  return &DisableLazyChecksum{
  }
}

func (p *DisableLazyChecksum) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *DisableLazyChecksum) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("DisableLazyChecksum"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *DisableLazyChecksum) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("DisableLazyChecksum({})")
}

// An annotation that applies a C++ adapter to typedef, field, or struct.
// 
// For example:
// 
//   @cpp.Adapter{name = "IdAdapter"}
//   typedef i64 MyI64;
// 
// Here the type `MyI64` has the C++ adapter `IdAdapter`.
// 
//   struct User {
//     @cpp.Adapter{name = "IdAdapter"}
//     1: i64 id;
//   }
// 
// Here the field `id` has the C++ adapter `IdAdapter`.
// 
// Attributes:
//  - Name: The name of a C++ adapter type used to convert between Thrift and native
// C++ representation.
// 
// The adapter can be either a Type or Field adapter, providing either of the following APIs:
// 
//     struct ThriftTypeAdapter {
//       static AdaptedType fromThrift(ThriftType thrift);
//       static {const ThriftType& | ThriftType} toThrift(const AdaptedType& native);
//     };
// 
//     struct ThriftFieldAdapter {
//       // Context is an instantiation of apache::thrift::FieldContext
//       template <class Context>
//       static void construct(AdaptedType& field, Context ctx);
// 
//       template <class Context>
//       static AdaptedType fromThriftField(ThriftType value, Context ctx);
// 
//       template <class Context>
//       static {const ThriftType& | ThriftType} toThrift(const AdaptedType& adapted, Context ctx);
//     };
//  - AdaptedType: It is sometimes necessary to specify AdaptedType here (in case the codegen would
// have a circular depdenceny, which will cause the C++ build to fail).
//  - UnderlyingName: When applied directly to a type (as opposed to on a typedef) the IDL name of the
// type will refer to the adapted type in C++ and the underlying thrift struct will be
// generated in a nested namespace and/or with a different name. By default the struct
// will be generated in a nested 'detail' namespace with the same name,
// but both of these can be changed by setting these fields.
// Empty string disables the nested namespace and uses the IDL name for the struct.
//  - ExtraNamespace
//  - MoveOnly: Must set to true when adapted type is not copyable.
type Adapter struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
  AdaptedType string `thrift:"adaptedType,2" db:"adaptedType" json:"adaptedType"`
  UnderlyingName string `thrift:"underlyingName,3" db:"underlyingName" json:"underlyingName"`
  ExtraNamespace string `thrift:"extraNamespace,4" db:"extraNamespace" json:"extraNamespace"`
  MoveOnly bool `thrift:"moveOnly,5" db:"moveOnly" json:"moveOnly"`
}

func NewAdapter() *Adapter {
  return &Adapter{
    ExtraNamespace: "detail",
  }
}


func (p *Adapter) GetName() string {
  return p.Name
}

func (p *Adapter) GetAdaptedType() string {
  return p.AdaptedType
}

func (p *Adapter) GetUnderlyingName() string {
  return p.UnderlyingName
}

func (p *Adapter) GetExtraNamespace() string {
  return p.ExtraNamespace
}

func (p *Adapter) GetMoveOnly() bool {
  return p.MoveOnly
}
type AdapterBuilder struct {
  obj *Adapter
}

func NewAdapterBuilder() *AdapterBuilder{
  return &AdapterBuilder{
    obj: NewAdapter(),
  }
}

func (p AdapterBuilder) Emit() *Adapter{
  return &Adapter{
    Name: p.obj.Name,
    AdaptedType: p.obj.AdaptedType,
    UnderlyingName: p.obj.UnderlyingName,
    ExtraNamespace: p.obj.ExtraNamespace,
    MoveOnly: p.obj.MoveOnly,
  }
}

func (a *AdapterBuilder) Name(name string) *AdapterBuilder {
  a.obj.Name = name
  return a
}

func (a *AdapterBuilder) AdaptedType(adaptedType string) *AdapterBuilder {
  a.obj.AdaptedType = adaptedType
  return a
}

func (a *AdapterBuilder) UnderlyingName(underlyingName string) *AdapterBuilder {
  a.obj.UnderlyingName = underlyingName
  return a
}

func (a *AdapterBuilder) ExtraNamespace(extraNamespace string) *AdapterBuilder {
  a.obj.ExtraNamespace = extraNamespace
  return a
}

func (a *AdapterBuilder) MoveOnly(moveOnly bool) *AdapterBuilder {
  a.obj.MoveOnly = moveOnly
  return a
}

func (a *Adapter) SetName(name string) *Adapter {
  a.Name = name
  return a
}

func (a *Adapter) SetAdaptedType(adaptedType string) *Adapter {
  a.AdaptedType = adaptedType
  return a
}

func (a *Adapter) SetUnderlyingName(underlyingName string) *Adapter {
  a.UnderlyingName = underlyingName
  return a
}

func (a *Adapter) SetExtraNamespace(extraNamespace string) *Adapter {
  a.ExtraNamespace = extraNamespace
  return a
}

func (a *Adapter) SetMoveOnly(moveOnly bool) *Adapter {
  a.MoveOnly = moveOnly
  return a
}

func (p *Adapter) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    case 5:
      if err := p.ReadField5(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Adapter)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Name = v
  }
  return nil
}

func (p *Adapter)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 2: ", err)
  } else {
    p.AdaptedType = v
  }
  return nil
}

func (p *Adapter)  ReadField3(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 3: ", err)
  } else {
    p.UnderlyingName = v
  }
  return nil
}

func (p *Adapter)  ReadField4(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 4: ", err)
  } else {
    p.ExtraNamespace = v
  }
  return nil
}

func (p *Adapter)  ReadField5(iprot thrift.Protocol) error {
  if v, err := iprot.ReadBool(); err != nil {
    return thrift.PrependError("error reading field 5: ", err)
  } else {
    p.MoveOnly = v
  }
  return nil
}

func (p *Adapter) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Adapter"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := p.writeField5(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Adapter) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *Adapter) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("adaptedType", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:adaptedType: ", p), err) }
  if err := oprot.WriteString(string(p.AdaptedType)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.adaptedType (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:adaptedType: ", p), err) }
  return err
}

func (p *Adapter) writeField3(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("underlyingName", thrift.STRING, 3); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:underlyingName: ", p), err) }
  if err := oprot.WriteString(string(p.UnderlyingName)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.underlyingName (3) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 3:underlyingName: ", p), err) }
  return err
}

func (p *Adapter) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("extraNamespace", thrift.STRING, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:extraNamespace: ", p), err) }
  if err := oprot.WriteString(string(p.ExtraNamespace)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.extraNamespace (4) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:extraNamespace: ", p), err) }
  return err
}

func (p *Adapter) writeField5(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("moveOnly", thrift.BOOL, 5); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 5:moveOnly: ", p), err) }
  if err := oprot.WriteBool(bool(p.MoveOnly)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.moveOnly (5) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 5:moveOnly: ", p), err) }
  return err
}

func (p *Adapter) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  adaptedTypeVal := fmt.Sprintf("%v", p.AdaptedType)
  underlyingNameVal := fmt.Sprintf("%v", p.UnderlyingName)
  extraNamespaceVal := fmt.Sprintf("%v", p.ExtraNamespace)
  moveOnlyVal := fmt.Sprintf("%v", p.MoveOnly)
  return fmt.Sprintf("Adapter({Name:%s AdaptedType:%s UnderlyingName:%s ExtraNamespace:%s MoveOnly:%s})", nameVal, adaptedTypeVal, underlyingNameVal, extraNamespaceVal, moveOnlyVal)
}

// Attributes:
//  - Atomic
type PackIsset struct {
  Atomic bool `thrift:"atomic,1" db:"atomic" json:"atomic"`
}

func NewPackIsset() *PackIsset {
  return &PackIsset{
    Atomic: true,
  }
}


func (p *PackIsset) GetAtomic() bool {
  return p.Atomic
}
type PackIssetBuilder struct {
  obj *PackIsset
}

func NewPackIssetBuilder() *PackIssetBuilder{
  return &PackIssetBuilder{
    obj: NewPackIsset(),
  }
}

func (p PackIssetBuilder) Emit() *PackIsset{
  return &PackIsset{
    Atomic: p.obj.Atomic,
  }
}

func (p *PackIssetBuilder) Atomic(atomic bool) *PackIssetBuilder {
  p.obj.Atomic = atomic
  return p
}

func (p *PackIsset) SetAtomic(atomic bool) *PackIsset {
  p.Atomic = atomic
  return p
}

func (p *PackIsset) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *PackIsset)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadBool(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Atomic = v
  }
  return nil
}

func (p *PackIsset) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("PackIsset"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *PackIsset) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("atomic", thrift.BOOL, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:atomic: ", p), err) }
  if err := oprot.WriteBool(bool(p.Atomic)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.atomic (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:atomic: ", p), err) }
  return err
}

func (p *PackIsset) String() string {
  if p == nil {
    return "<nil>"
  }

  atomicVal := fmt.Sprintf("%v", p.Atomic)
  return fmt.Sprintf("PackIsset({Atomic:%s})", atomicVal)
}

type MinimizePadding struct {
}

func NewMinimizePadding() *MinimizePadding {
  return &MinimizePadding{}
}

type MinimizePaddingBuilder struct {
  obj *MinimizePadding
}

func NewMinimizePaddingBuilder() *MinimizePaddingBuilder{
  return &MinimizePaddingBuilder{
    obj: NewMinimizePadding(),
  }
}

func (p MinimizePaddingBuilder) Emit() *MinimizePadding{
  return &MinimizePadding{
  }
}

func (p *MinimizePadding) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MinimizePadding) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MinimizePadding"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MinimizePadding) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("MinimizePadding({})")
}

type TriviallyRelocatable struct {
}

func NewTriviallyRelocatable() *TriviallyRelocatable {
  return &TriviallyRelocatable{}
}

type TriviallyRelocatableBuilder struct {
  obj *TriviallyRelocatable
}

func NewTriviallyRelocatableBuilder() *TriviallyRelocatableBuilder{
  return &TriviallyRelocatableBuilder{
    obj: NewTriviallyRelocatable(),
  }
}

func (p TriviallyRelocatableBuilder) Emit() *TriviallyRelocatable{
  return &TriviallyRelocatable{
  }
}

func (p *TriviallyRelocatable) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *TriviallyRelocatable) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("TriviallyRelocatable"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *TriviallyRelocatable) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("TriviallyRelocatable({})")
}

type ScopedEnumAsUnionType struct {
}

func NewScopedEnumAsUnionType() *ScopedEnumAsUnionType {
  return &ScopedEnumAsUnionType{}
}

type ScopedEnumAsUnionTypeBuilder struct {
  obj *ScopedEnumAsUnionType
}

func NewScopedEnumAsUnionTypeBuilder() *ScopedEnumAsUnionTypeBuilder{
  return &ScopedEnumAsUnionTypeBuilder{
    obj: NewScopedEnumAsUnionType(),
  }
}

func (p ScopedEnumAsUnionTypeBuilder) Emit() *ScopedEnumAsUnionType{
  return &ScopedEnumAsUnionType{
  }
}

func (p *ScopedEnumAsUnionType) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *ScopedEnumAsUnionType) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("ScopedEnumAsUnionType"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *ScopedEnumAsUnionType) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("ScopedEnumAsUnionType({})")
}

// Indicates a typedef should be 'strong', and require an explicit cast to
// the underlying type.
// 
// Currently only works for integer typedefs, for example:
// 
//     @cpp.StrongType
//     typedef i32 MyId;
// 
// Will cause an enum class to be used instead of a typedef in the genearte code, for example:
// 
//     enum class MyId : ::std::int32_t {};
// 
type StrongType struct {
}

func NewStrongType() *StrongType {
  return &StrongType{}
}

type StrongTypeBuilder struct {
  obj *StrongType
}

func NewStrongTypeBuilder() *StrongTypeBuilder{
  return &StrongTypeBuilder{
    obj: NewStrongType(),
  }
}

func (p StrongTypeBuilder) Emit() *StrongType{
  return &StrongType{
  }
}

func (p *StrongType) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *StrongType) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("StrongType"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *StrongType) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("StrongType({})")
}

// An annotation that intercepts field access with C++ field interceptor.
// Use with *caution* since this may introduce substantial performance overhead on each field access.
// 
// For example:
// 
//     struct Foo {
//       @cpp.FieldInterceptor{name = "MyFieldInterceptor"}
//       1: i64 id;
//     }
// 
// The field interceptor `MyFieldInterceptor` will intercept with `interceptThriftFieldAccess`
// when the field `id` is accessed.
// 
// Attributes:
//  - Name: The name of a field interceptor.
// 
// The field interceptor provides the following API:
// 
//     struct ThriftFieldInterceptor {
//       template <typename T, typename Struct, int16_t FieldId>
//       static void interceptThriftFieldAccess(T&& field,
//                                              apache::thrift::FieldContext<Struct, FieldId>&& ctx);
//     };
// 
// The field interceptor intercepts with the field value and the field context.
// It enforces an easily searchable function name `interceptThriftFieldAccess`.
//  - Noinline: Setting to true makes compiler not inline and erase function signature for
// the intercepting field accessor.
type FieldInterceptor struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
  Noinline bool `thrift:"noinline,2" db:"noinline" json:"noinline"`
}

func NewFieldInterceptor() *FieldInterceptor {
  return &FieldInterceptor{}
}


func (p *FieldInterceptor) GetName() string {
  return p.Name
}

func (p *FieldInterceptor) GetNoinline() bool {
  return p.Noinline
}
type FieldInterceptorBuilder struct {
  obj *FieldInterceptor
}

func NewFieldInterceptorBuilder() *FieldInterceptorBuilder{
  return &FieldInterceptorBuilder{
    obj: NewFieldInterceptor(),
  }
}

func (p FieldInterceptorBuilder) Emit() *FieldInterceptor{
  return &FieldInterceptor{
    Name: p.obj.Name,
    Noinline: p.obj.Noinline,
  }
}

func (f *FieldInterceptorBuilder) Name(name string) *FieldInterceptorBuilder {
  f.obj.Name = name
  return f
}

func (f *FieldInterceptorBuilder) Noinline(noinline bool) *FieldInterceptorBuilder {
  f.obj.Noinline = noinline
  return f
}

func (f *FieldInterceptor) SetName(name string) *FieldInterceptor {
  f.Name = name
  return f
}

func (f *FieldInterceptor) SetNoinline(noinline bool) *FieldInterceptor {
  f.Noinline = noinline
  return f
}

func (p *FieldInterceptor) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FieldInterceptor)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Name = v
  }
  return nil
}

func (p *FieldInterceptor)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadBool(); err != nil {
    return thrift.PrependError("error reading field 2: ", err)
  } else {
    p.Noinline = v
  }
  return nil
}

func (p *FieldInterceptor) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("FieldInterceptor"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FieldInterceptor) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *FieldInterceptor) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("noinline", thrift.BOOL, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:noinline: ", p), err) }
  if err := oprot.WriteBool(bool(p.Noinline)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.noinline (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:noinline: ", p), err) }
  return err
}

func (p *FieldInterceptor) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  noinlineVal := fmt.Sprintf("%v", p.Noinline)
  return fmt.Sprintf("FieldInterceptor({Name:%s Noinline:%s})", nameVal, noinlineVal)
}

type UseOpEncode struct {
}

func NewUseOpEncode() *UseOpEncode {
  return &UseOpEncode{}
}

type UseOpEncodeBuilder struct {
  obj *UseOpEncode
}

func NewUseOpEncodeBuilder() *UseOpEncodeBuilder{
  return &UseOpEncodeBuilder{
    obj: NewUseOpEncode(),
  }
}

func (p UseOpEncodeBuilder) Emit() *UseOpEncode{
  return &UseOpEncode{
  }
}

func (p *UseOpEncode) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *UseOpEncode) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("UseOpEncode"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *UseOpEncode) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("UseOpEncode({})")
}


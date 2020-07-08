#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.types cimport bstring, move, field_ref as __FieldRef, optional_field_ref as __OptionalFieldRef
from folly.optional cimport cOptional

cdef extern from *:
    ctypedef cint64_t Foo "Foo"
cdef extern from *:
    ctypedef double Bar "Bar"
cdef extern from *:
    ctypedef cint32_t Baz "Baz"

cdef extern from "src/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cMyEnumA "::cpp2::MyEnumA":
        bint operator==(cMyEnumA&)
        bint operator!=(cMyEnumA&)
    cMyEnumA MyEnumA__fieldA "::cpp2::MyEnumA::fieldA"
    cMyEnumA MyEnumA__fieldB "::cpp2::MyEnumA::fieldB"
    cMyEnumA MyEnumA__fieldC "::cpp2::MyEnumA::fieldC"




cdef class MyEnumA(thrift.py3.types.CompiledEnum):
    pass


cdef cMyEnumA MyEnumA_to_cpp(MyEnumA value)



cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":
    cdef cppclass cSmallStruct__isset "::cpp2::SmallStruct::__isset":
        bint small_A
        bint small_B

    cdef cppclass cSmallStruct "::cpp2::SmallStruct":
        cSmallStruct() except +
        cSmallStruct(const cSmallStruct&) except +
        bint operator==(cSmallStruct&)
        bint operator!=(cSmallStruct&)
        bint operator<(cSmallStruct&)
        bint operator>(cSmallStruct&)
        bint operator<=(cSmallStruct&)
        bint operator>=(cSmallStruct&)
        __FieldRef[cbool] small_A_ref()
        cbool small_A
        __FieldRef[cint32_t] small_B_ref()
        cint32_t small_B
        cSmallStruct__isset __isset

    cdef cppclass ccontainerStruct__isset "::cpp2::containerStruct::__isset":
        bint fieldA
        bint fieldB
        bint fieldC
        bint fieldD
        bint fieldE
        bint fieldF
        bint fieldG
        bint fieldH
        bint fieldI
        bint fieldJ
        bint fieldK
        bint fieldL
        bint fieldM
        bint fieldN
        bint fieldO
        bint fieldP
        bint fieldQ
        bint fieldR
        bint fieldS
        bint fieldT
        bint fieldU
        bint fieldX

    cdef cppclass ccontainerStruct "::cpp2::containerStruct":
        ccontainerStruct() except +
        ccontainerStruct(const ccontainerStruct&) except +
        bint operator==(ccontainerStruct&)
        bint operator!=(ccontainerStruct&)
        bint operator<(ccontainerStruct&)
        bint operator>(ccontainerStruct&)
        bint operator<=(ccontainerStruct&)
        bint operator>=(ccontainerStruct&)
        __FieldRef[cbool] fieldA_ref()
        cbool fieldA
        __FieldRef[cmap[string,cbool]] fieldB_ref()
        cmap[string,cbool] fieldB
        __FieldRef[cset[cint32_t]] fieldC_ref()
        cset[cint32_t] fieldC
        __FieldRef[string] fieldD_ref()
        string fieldD
        __FieldRef[string] fieldE_ref()
        string fieldE
        __FieldRef[vector[vector[vector[cint32_t]]]] fieldF_ref()
        vector[vector[vector[cint32_t]]] fieldF
        __FieldRef[cmap[string,cmap[string,cmap[string,cint32_t]]]] fieldG_ref()
        cmap[string,cmap[string,cmap[string,cint32_t]]] fieldG
        __FieldRef[vector[cset[cint32_t]]] fieldH_ref()
        vector[cset[cint32_t]] fieldH
        __FieldRef[cbool] fieldI_ref()
        cbool fieldI
        __FieldRef[cmap[string,vector[cint32_t]]] fieldJ_ref()
        cmap[string,vector[cint32_t]] fieldJ
        __FieldRef[vector[vector[vector[vector[cint32_t]]]]] fieldK_ref()
        vector[vector[vector[vector[cint32_t]]]] fieldK
        __FieldRef[cset[cset[cset[cbool]]]] fieldL_ref()
        cset[cset[cset[cbool]]] fieldL
        __FieldRef[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] fieldM_ref()
        cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]] fieldM
        __FieldRef[vector[Foo]] fieldN_ref()
        vector[Foo] fieldN
        __FieldRef[vector[Bar]] fieldO_ref()
        vector[Bar] fieldO
        __FieldRef[vector[Baz]] fieldP_ref()
        vector[Baz] fieldP
        __FieldRef[cMyEnumA] fieldQ_ref()
        cMyEnumA fieldQ
        unique_ptr[cmap[string,cbool]] fieldR
        unique_ptr[cSmallStruct] fieldS
        shared_ptr[cSmallStruct] fieldT
        shared_ptr[const cSmallStruct] fieldU
        unique_ptr[cSmallStruct] fieldX
        ccontainerStruct__isset __isset

    cdef shared_ptr[cmap[string,cbool]] reference_shared_ptr_fieldB "thrift::py3::reference_shared_ptr<std::map<std::string,bool>>"(shared_ptr[ccontainerStruct]&, cmap[string,cbool]&)
    cdef shared_ptr[cset[cint32_t]] reference_shared_ptr_fieldC "thrift::py3::reference_shared_ptr<std::set<int32_t>>"(shared_ptr[ccontainerStruct]&, cset[cint32_t]&)
    cdef shared_ptr[vector[vector[vector[cint32_t]]]] reference_shared_ptr_fieldF "thrift::py3::reference_shared_ptr<std::vector<std::vector<std::vector<int32_t>>>>"(shared_ptr[ccontainerStruct]&, vector[vector[vector[cint32_t]]]&)
    cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] reference_shared_ptr_fieldG "thrift::py3::reference_shared_ptr<std::map<std::string,std::map<std::string,std::map<std::string,int32_t>>>>"(shared_ptr[ccontainerStruct]&, cmap[string,cmap[string,cmap[string,cint32_t]]]&)
    cdef shared_ptr[vector[cset[cint32_t]]] reference_shared_ptr_fieldH "thrift::py3::reference_shared_ptr<std::vector<std::set<int32_t>>>"(shared_ptr[ccontainerStruct]&, vector[cset[cint32_t]]&)
    cdef shared_ptr[cmap[string,vector[cint32_t]]] reference_shared_ptr_fieldJ "thrift::py3::reference_shared_ptr<std::map<std::string,std::vector<int32_t>>>"(shared_ptr[ccontainerStruct]&, cmap[string,vector[cint32_t]]&)
    cdef shared_ptr[vector[vector[vector[vector[cint32_t]]]]] reference_shared_ptr_fieldK "thrift::py3::reference_shared_ptr<std::vector<std::vector<std::vector<std::vector<int32_t>>>>>"(shared_ptr[ccontainerStruct]&, vector[vector[vector[vector[cint32_t]]]]&)
    cdef shared_ptr[cset[cset[cset[cbool]]]] reference_shared_ptr_fieldL "thrift::py3::reference_shared_ptr<std::set<std::set<std::set<bool>>>>"(shared_ptr[ccontainerStruct]&, cset[cset[cset[cbool]]]&)
    cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] reference_shared_ptr_fieldM "thrift::py3::reference_shared_ptr<std::map<std::set<std::vector<int32_t>>,std::map<std::vector<std::set<std::string>>,std::string>>>"(shared_ptr[ccontainerStruct]&, cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]&)
    cdef shared_ptr[vector[Foo]] reference_shared_ptr_fieldN "thrift::py3::reference_shared_ptr<std::vector<Foo>>"(shared_ptr[ccontainerStruct]&, vector[Foo]&)
    cdef shared_ptr[vector[Bar]] reference_shared_ptr_fieldO "thrift::py3::reference_shared_ptr<std::vector<Bar>>"(shared_ptr[ccontainerStruct]&, vector[Bar]&)
    cdef shared_ptr[vector[Baz]] reference_shared_ptr_fieldP "thrift::py3::reference_shared_ptr<std::vector<Baz>>"(shared_ptr[ccontainerStruct]&, vector[Baz]&)
    cdef shared_ptr[cmap[string,cbool]] reference_shared_ptr_fieldR "thrift::py3::reference_shared_ptr<std::map<std::string,bool>>"(shared_ptr[ccontainerStruct]&, cmap[string,cbool]&)
    cdef shared_ptr[cSmallStruct] reference_shared_ptr_fieldS "thrift::py3::reference_shared_ptr<::cpp2::SmallStruct>"(shared_ptr[ccontainerStruct]&, cSmallStruct&)
    cdef shared_ptr[cSmallStruct] reference_shared_ptr_fieldT "thrift::py3::reference_shared_ptr<::cpp2::SmallStruct>"(shared_ptr[ccontainerStruct]&, cSmallStruct&)
    cdef shared_ptr[cSmallStruct] reference_shared_ptr_fieldU "thrift::py3::reference_shared_ptr<::cpp2::SmallStruct>"(shared_ptr[ccontainerStruct]&, cSmallStruct&)
    cdef shared_ptr[cSmallStruct] reference_shared_ptr_fieldX "thrift::py3::reference_shared_ptr<::cpp2::SmallStruct>"(shared_ptr[ccontainerStruct]&, cSmallStruct&)

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cSmallStruct] move(unique_ptr[cSmallStruct])
    cdef shared_ptr[cSmallStruct] move_shared "std::move"(shared_ptr[cSmallStruct])
    cdef unique_ptr[cSmallStruct] move_unique "std::move"(unique_ptr[cSmallStruct])
    cdef shared_ptr[ccontainerStruct] move(unique_ptr[ccontainerStruct])
    cdef shared_ptr[ccontainerStruct] move_shared "std::move"(shared_ptr[ccontainerStruct])
    cdef unique_ptr[ccontainerStruct] move_unique "std::move"(unique_ptr[ccontainerStruct])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cSmallStruct] const_pointer_cast "std::const_pointer_cast<const ::cpp2::SmallStruct>"(shared_ptr[cSmallStruct])
    cdef shared_ptr[const ccontainerStruct] const_pointer_cast "std::const_pointer_cast<const ::cpp2::containerStruct>"(shared_ptr[ccontainerStruct])



cdef class SmallStruct(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cSmallStruct] _cpp_obj

    @staticmethod
    cdef unique_ptr[cSmallStruct] _make_instance(
        cSmallStruct* base_instance,
        bint* __isNOTSET,
        pbool small_A,
        object small_B
    ) except *

    @staticmethod
    cdef create(shared_ptr[cSmallStruct])



cdef class containerStruct(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[ccontainerStruct] _cpp_obj
    cdef Map__string_bool __field_fieldB
    cdef Set__i32 __field_fieldC
    cdef List__List__List__i32 __field_fieldF
    cdef Map__string_Map__string_Map__string_i32 __field_fieldG
    cdef List__Set__i32 __field_fieldH
    cdef Map__string_List__i32 __field_fieldJ
    cdef List__List__List__List__i32 __field_fieldK
    cdef Set__Set__Set__bool __field_fieldL
    cdef Map__Set__List__i32_Map__List__Set__string_string __field_fieldM
    cdef List__Foo__i64 __field_fieldN
    cdef List__Bar__double __field_fieldO
    cdef List__Baz__i32 __field_fieldP
    cdef Map__string_bool __field_fieldR
    cdef SmallStruct __field_fieldS
    cdef SmallStruct __field_fieldT
    cdef SmallStruct __field_fieldU
    cdef SmallStruct __field_fieldX

    @staticmethod
    cdef unique_ptr[ccontainerStruct] _make_instance(
        ccontainerStruct* base_instance,
        bint* __isNOTSET,
        pbool fieldA,
        object fieldB,
        object fieldC,
        str fieldD,
        str fieldE,
        object fieldF,
        object fieldG,
        object fieldH,
        pbool fieldI,
        object fieldJ,
        object fieldK,
        object fieldL,
        object fieldM,
        object fieldN,
        object fieldO,
        object fieldP,
        MyEnumA fieldQ,
        object fieldR,
        SmallStruct fieldS,
        SmallStruct fieldT,
        SmallStruct fieldU,
        SmallStruct fieldX
    ) except *

    @staticmethod
    cdef create(shared_ptr[ccontainerStruct])


cdef class Map__string_bool(thrift.py3.types.Container):
    cdef shared_ptr[cmap[string,cbool]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[string,cbool]])
    @staticmethod
    cdef shared_ptr[cmap[string,cbool]] _make_instance(object items) except *

cdef class Set__i32(thrift.py3.types.Container):
    cdef shared_ptr[cset[cint32_t]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[cint32_t]])
    @staticmethod
    cdef shared_ptr[cset[cint32_t]] _make_instance(object items) except *

cdef class List__i32(thrift.py3.types.Container):
    cdef shared_ptr[vector[cint32_t]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[cint32_t]])
    @staticmethod
    cdef shared_ptr[vector[cint32_t]] _make_instance(object items) except *

cdef class List__List__i32(thrift.py3.types.Container):
    cdef shared_ptr[vector[vector[cint32_t]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[vector[cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[vector[cint32_t]]] _make_instance(object items) except *

cdef class List__List__List__i32(thrift.py3.types.Container):
    cdef shared_ptr[vector[vector[vector[cint32_t]]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[vector[vector[cint32_t]]]])
    @staticmethod
    cdef shared_ptr[vector[vector[vector[cint32_t]]]] _make_instance(object items) except *

cdef class Map__string_i32(thrift.py3.types.Container):
    cdef shared_ptr[cmap[string,cint32_t]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[string,cint32_t]])
    @staticmethod
    cdef shared_ptr[cmap[string,cint32_t]] _make_instance(object items) except *

cdef class Map__string_Map__string_i32(thrift.py3.types.Container):
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[string,cmap[string,cint32_t]]])
    @staticmethod
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] _make_instance(object items) except *

cdef class Map__string_Map__string_Map__string_i32(thrift.py3.types.Container):
    cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]])
    @staticmethod
    cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] _make_instance(object items) except *

cdef class List__Set__i32(thrift.py3.types.Container):
    cdef shared_ptr[vector[cset[cint32_t]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[cset[cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[cset[cint32_t]]] _make_instance(object items) except *

cdef class Map__string_List__i32(thrift.py3.types.Container):
    cdef shared_ptr[cmap[string,vector[cint32_t]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[string,vector[cint32_t]]])
    @staticmethod
    cdef shared_ptr[cmap[string,vector[cint32_t]]] _make_instance(object items) except *

cdef class List__List__List__List__i32(thrift.py3.types.Container):
    cdef shared_ptr[vector[vector[vector[vector[cint32_t]]]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[vector[vector[vector[cint32_t]]]]])
    @staticmethod
    cdef shared_ptr[vector[vector[vector[vector[cint32_t]]]]] _make_instance(object items) except *

cdef class Set__bool(thrift.py3.types.Container):
    cdef shared_ptr[cset[cbool]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[cbool]])
    @staticmethod
    cdef shared_ptr[cset[cbool]] _make_instance(object items) except *

cdef class Set__Set__bool(thrift.py3.types.Container):
    cdef shared_ptr[cset[cset[cbool]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[cset[cbool]]])
    @staticmethod
    cdef shared_ptr[cset[cset[cbool]]] _make_instance(object items) except *

cdef class Set__Set__Set__bool(thrift.py3.types.Container):
    cdef shared_ptr[cset[cset[cset[cbool]]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[cset[cset[cbool]]]])
    @staticmethod
    cdef shared_ptr[cset[cset[cset[cbool]]]] _make_instance(object items) except *

cdef class Set__List__i32(thrift.py3.types.Container):
    cdef shared_ptr[cset[vector[cint32_t]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[vector[cint32_t]]])
    @staticmethod
    cdef shared_ptr[cset[vector[cint32_t]]] _make_instance(object items) except *

cdef class Set__string(thrift.py3.types.Container):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[string]])
    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *

cdef class List__Set__string(thrift.py3.types.Container):
    cdef shared_ptr[vector[cset[string]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[cset[string]]])
    @staticmethod
    cdef shared_ptr[vector[cset[string]]] _make_instance(object items) except *

cdef class Map__List__Set__string_string(thrift.py3.types.Container):
    cdef shared_ptr[cmap[vector[cset[string]],string]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[vector[cset[string]],string]])
    @staticmethod
    cdef shared_ptr[cmap[vector[cset[string]],string]] _make_instance(object items) except *

cdef class Map__Set__List__i32_Map__List__Set__string_string(thrift.py3.types.Container):
    cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]])
    @staticmethod
    cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] _make_instance(object items) except *

cdef class List__Foo__i64(thrift.py3.types.Container):
    cdef shared_ptr[vector[Foo]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[Foo]])
    @staticmethod
    cdef shared_ptr[vector[Foo]] _make_instance(object items) except *

cdef class List__Bar__double(thrift.py3.types.Container):
    cdef shared_ptr[vector[Bar]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[Bar]])
    @staticmethod
    cdef shared_ptr[vector[Bar]] _make_instance(object items) except *

cdef class List__Baz__i32(thrift.py3.types.Container):
    cdef shared_ptr[vector[Baz]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[Baz]])
    @staticmethod
    cdef shared_ptr[vector[Baz]] _make_instance(object items) except *

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[vector[Bar]] move "std::move"(unique_ptr[vector[Bar]])
    cdef shared_ptr[vector[Bar]] move_shared "std::move"(shared_ptr[vector[Bar]])
    cdef shared_ptr[vector[Baz]] move "std::move"(unique_ptr[vector[Baz]])
    cdef shared_ptr[vector[Baz]] move_shared "std::move"(shared_ptr[vector[Baz]])
    cdef shared_ptr[vector[Foo]] move "std::move"(unique_ptr[vector[Foo]])
    cdef shared_ptr[vector[Foo]] move_shared "std::move"(shared_ptr[vector[Foo]])
    cdef shared_ptr[vector[vector[vector[vector[cint32_t]]]]] move "std::move"(unique_ptr[vector[vector[vector[vector[cint32_t]]]]])
    cdef shared_ptr[vector[vector[vector[vector[cint32_t]]]]] move_shared "std::move"(shared_ptr[vector[vector[vector[vector[cint32_t]]]]])
    cdef shared_ptr[vector[vector[vector[cint32_t]]]] move "std::move"(unique_ptr[vector[vector[vector[cint32_t]]]])
    cdef shared_ptr[vector[vector[vector[cint32_t]]]] move_shared "std::move"(shared_ptr[vector[vector[vector[cint32_t]]]])
    cdef shared_ptr[vector[vector[cint32_t]]] move "std::move"(unique_ptr[vector[vector[cint32_t]]])
    cdef shared_ptr[vector[vector[cint32_t]]] move_shared "std::move"(shared_ptr[vector[vector[cint32_t]]])
    cdef shared_ptr[vector[cset[cint32_t]]] move "std::move"(unique_ptr[vector[cset[cint32_t]]])
    cdef shared_ptr[vector[cset[cint32_t]]] move_shared "std::move"(shared_ptr[vector[cset[cint32_t]]])
    cdef shared_ptr[vector[cset[string]]] move "std::move"(unique_ptr[vector[cset[string]]])
    cdef shared_ptr[vector[cset[string]]] move_shared "std::move"(shared_ptr[vector[cset[string]]])
    cdef shared_ptr[vector[cint32_t]] move "std::move"(unique_ptr[vector[cint32_t]])
    cdef shared_ptr[vector[cint32_t]] move_shared "std::move"(shared_ptr[vector[cint32_t]])
    cdef shared_ptr[cmap[vector[cset[string]],string]] move "std::move"(unique_ptr[cmap[vector[cset[string]],string]])
    cdef shared_ptr[cmap[vector[cset[string]],string]] move_shared "std::move"(shared_ptr[cmap[vector[cset[string]],string]])
    cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] move "std::move"(unique_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]])
    cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] move_shared "std::move"(shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]])
    cdef shared_ptr[cmap[string,vector[cint32_t]]] move "std::move"(unique_ptr[cmap[string,vector[cint32_t]]])
    cdef shared_ptr[cmap[string,vector[cint32_t]]] move_shared "std::move"(shared_ptr[cmap[string,vector[cint32_t]]])
    cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] move "std::move"(unique_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]])
    cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] move_shared "std::move"(shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]])
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] move "std::move"(unique_ptr[cmap[string,cmap[string,cint32_t]]])
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] move_shared "std::move"(shared_ptr[cmap[string,cmap[string,cint32_t]]])
    cdef shared_ptr[cmap[string,cbool]] move "std::move"(unique_ptr[cmap[string,cbool]])
    cdef shared_ptr[cmap[string,cbool]] move_shared "std::move"(shared_ptr[cmap[string,cbool]])
    cdef shared_ptr[cmap[string,cint32_t]] move "std::move"(unique_ptr[cmap[string,cint32_t]])
    cdef shared_ptr[cmap[string,cint32_t]] move_shared "std::move"(shared_ptr[cmap[string,cint32_t]])
    cdef shared_ptr[cset[vector[cint32_t]]] move "std::move"(unique_ptr[cset[vector[cint32_t]]])
    cdef shared_ptr[cset[vector[cint32_t]]] move_shared "std::move"(shared_ptr[cset[vector[cint32_t]]])
    cdef shared_ptr[cset[cset[cset[cbool]]]] move "std::move"(unique_ptr[cset[cset[cset[cbool]]]])
    cdef shared_ptr[cset[cset[cset[cbool]]]] move_shared "std::move"(shared_ptr[cset[cset[cset[cbool]]]])
    cdef shared_ptr[cset[cset[cbool]]] move "std::move"(unique_ptr[cset[cset[cbool]]])
    cdef shared_ptr[cset[cset[cbool]]] move_shared "std::move"(shared_ptr[cset[cset[cbool]]])
    cdef shared_ptr[cset[cbool]] move "std::move"(unique_ptr[cset[cbool]])
    cdef shared_ptr[cset[cbool]] move_shared "std::move"(shared_ptr[cset[cbool]])
    cdef shared_ptr[cset[cint32_t]] move "std::move"(unique_ptr[cset[cint32_t]])
    cdef shared_ptr[cset[cint32_t]] move_shared "std::move"(shared_ptr[cset[cint32_t]])
    cdef shared_ptr[cset[string]] move "std::move"(unique_ptr[cset[string]])
    cdef shared_ptr[cset[string]] move_shared "std::move"(shared_ptr[cset[string]])
cdef extern from "<utility>" nogil:
    pass  
    shared_ptr[vector[cint32_t]] reference_shared_ptr_List__List__i32 "thrift::py3::reference_shared_ptr<std::vector<int32_t>>"(...)
    shared_ptr[vector[vector[cint32_t]]] reference_shared_ptr_List__List__List__i32 "thrift::py3::reference_shared_ptr<std::vector<std::vector<int32_t>>>"(...)
    shared_ptr[cmap[string,cint32_t]] reference_shared_ptr_Map__string_Map__string_i32 "thrift::py3::reference_shared_ptr<std::map<std::string,int32_t>>"(...)
    shared_ptr[cmap[string,cmap[string,cint32_t]]] reference_shared_ptr_Map__string_Map__string_Map__string_i32 "thrift::py3::reference_shared_ptr<std::map<std::string,std::map<std::string,int32_t>>>"(...)
    shared_ptr[cset[cint32_t]] reference_shared_ptr_List__Set__i32 "thrift::py3::reference_shared_ptr<std::set<int32_t>>"(...)
    shared_ptr[vector[cint32_t]] reference_shared_ptr_Map__string_List__i32 "thrift::py3::reference_shared_ptr<std::vector<int32_t>>"(...)
    shared_ptr[vector[vector[vector[cint32_t]]]] reference_shared_ptr_List__List__List__List__i32 "thrift::py3::reference_shared_ptr<std::vector<std::vector<std::vector<int32_t>>>>"(...)
    shared_ptr[cset[cbool]] reference_shared_ptr_Set__Set__bool "thrift::py3::reference_shared_ptr<std::set<bool>>"(...)
    shared_ptr[cset[cset[cbool]]] reference_shared_ptr_Set__Set__Set__bool "thrift::py3::reference_shared_ptr<std::set<std::set<bool>>>"(...)
    shared_ptr[vector[cint32_t]] reference_shared_ptr_Set__List__i32 "thrift::py3::reference_shared_ptr<std::vector<int32_t>>"(...)
    shared_ptr[cset[string]] reference_shared_ptr_List__Set__string "thrift::py3::reference_shared_ptr<std::set<std::string>>"(...)
    shared_ptr[vector[cset[string]]] reference_shared_ptr_Map__List__Set__string_string_key "thrift::py3::reference_shared_ptr<std::vector<std::set<std::string>>>"(...)
    shared_ptr[cset[vector[cint32_t]]] reference_shared_ptr_Map__Set__List__i32_Map__List__Set__string_string_key "thrift::py3::reference_shared_ptr<std::set<std::vector<int32_t>>>"(...)
    shared_ptr[cmap[vector[cset[string]],string]] reference_shared_ptr_Map__Set__List__i32_Map__List__Set__string_string "thrift::py3::reference_shared_ptr<std::map<std::vector<std::set<std::string>>,std::string>>"(...)
cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const vector[Bar]] const_pointer_cast "std::const_pointer_cast<const std::vector<Bar>>"(shared_ptr[vector[Bar]])
    cdef shared_ptr[const vector[Baz]] const_pointer_cast "std::const_pointer_cast<const std::vector<Baz>>"(shared_ptr[vector[Baz]])
    cdef shared_ptr[const vector[Foo]] const_pointer_cast "std::const_pointer_cast<const std::vector<Foo>>"(shared_ptr[vector[Foo]])
    cdef shared_ptr[const vector[vector[vector[vector[cint32_t]]]]] const_pointer_cast "std::const_pointer_cast<const std::vector<std::vector<std::vector<std::vector<int32_t>>>>>"(shared_ptr[vector[vector[vector[vector[cint32_t]]]]])
    cdef shared_ptr[const vector[vector[vector[cint32_t]]]] const_pointer_cast "std::const_pointer_cast<const std::vector<std::vector<std::vector<int32_t>>>>"(shared_ptr[vector[vector[vector[cint32_t]]]])
    cdef shared_ptr[const vector[vector[cint32_t]]] const_pointer_cast "std::const_pointer_cast<const std::vector<std::vector<int32_t>>>"(shared_ptr[vector[vector[cint32_t]]])
    cdef shared_ptr[const vector[cset[cint32_t]]] const_pointer_cast "std::const_pointer_cast<const std::vector<std::set<int32_t>>>"(shared_ptr[vector[cset[cint32_t]]])
    cdef shared_ptr[const vector[cset[string]]] const_pointer_cast "std::const_pointer_cast<const std::vector<std::set<std::string>>>"(shared_ptr[vector[cset[string]]])
    cdef shared_ptr[const vector[cint32_t]] const_pointer_cast "std::const_pointer_cast<const std::vector<int32_t>>"(shared_ptr[vector[cint32_t]])
    cdef shared_ptr[const cmap[vector[cset[string]],string]] const_pointer_cast "std::const_pointer_cast<const std::map<std::vector<std::set<std::string>>,std::string>>"(shared_ptr[cmap[vector[cset[string]],string]])
    cdef shared_ptr[const cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] const_pointer_cast "std::const_pointer_cast<const std::map<std::set<std::vector<int32_t>>,std::map<std::vector<std::set<std::string>>,std::string>>>"(shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]])
    cdef shared_ptr[const cmap[string,vector[cint32_t]]] const_pointer_cast "std::const_pointer_cast<const std::map<std::string,std::vector<int32_t>>>"(shared_ptr[cmap[string,vector[cint32_t]]])
    cdef shared_ptr[const cmap[string,cmap[string,cmap[string,cint32_t]]]] const_pointer_cast "std::const_pointer_cast<const std::map<std::string,std::map<std::string,std::map<std::string,int32_t>>>>"(shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]])
    cdef shared_ptr[const cmap[string,cmap[string,cint32_t]]] const_pointer_cast "std::const_pointer_cast<const std::map<std::string,std::map<std::string,int32_t>>>"(shared_ptr[cmap[string,cmap[string,cint32_t]]])
    cdef shared_ptr[const cmap[string,cbool]] const_pointer_cast "std::const_pointer_cast<const std::map<std::string,bool>>"(shared_ptr[cmap[string,cbool]])
    cdef shared_ptr[const cmap[string,cint32_t]] const_pointer_cast "std::const_pointer_cast<const std::map<std::string,int32_t>>"(shared_ptr[cmap[string,cint32_t]])
    cdef shared_ptr[const cset[vector[cint32_t]]] const_pointer_cast "std::const_pointer_cast<const std::set<std::vector<int32_t>>>"(shared_ptr[cset[vector[cint32_t]]])
    cdef shared_ptr[const cset[cset[cset[cbool]]]] const_pointer_cast "std::const_pointer_cast<const std::set<std::set<std::set<bool>>>>"(shared_ptr[cset[cset[cset[cbool]]]])
    cdef shared_ptr[const cset[cset[cbool]]] const_pointer_cast "std::const_pointer_cast<const std::set<std::set<bool>>>"(shared_ptr[cset[cset[cbool]]])
    cdef shared_ptr[const cset[cbool]] const_pointer_cast "std::const_pointer_cast<const std::set<bool>>"(shared_ptr[cset[cbool]])
    cdef shared_ptr[const cset[cint32_t]] const_pointer_cast "std::const_pointer_cast<const std::set<int32_t>>"(shared_ptr[cset[cint32_t]])
    cdef shared_ptr[const cset[string]] const_pointer_cast "std::const_pointer_cast<const std::set<std::string>>"(shared_ptr[cset[string]])


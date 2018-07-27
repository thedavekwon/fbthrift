#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext, pass_context
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit
)

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as __iobuf
import folly.iobuf as __iobuf
from folly.iobuf cimport move as move_iobuf

cimport my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types
import my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types

import asyncio
import functools
import sys
import traceback
import types as _py_types

from my.namespacing.test.module.module.services_wrapper cimport cTestServiceInterface


cdef extern from "<utility>" namespace "std":
    cdef cFollyPromise[int64_t] move_promise_int64_t "std::move"(
        cFollyPromise[int64_t])

cdef class Promise_int64_t:
    cdef cFollyPromise[int64_t] cPromise

    @staticmethod
    cdef create(cFollyPromise[int64_t] cPromise):
        inst = <Promise_int64_t>Promise_int64_t.__new__(Promise_int64_t)
        inst.cPromise = move_promise_int64_t(cPromise)
        return inst

cdef object _TestService_annotations = _py_types.MappingProxyType({
})


cdef class TestServiceInterface(
    ServiceInterface
):
    annotations = _TestService_annotations

    def __cinit__(self):
        self.interface_wrapper = cTestServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_init(fn):
        return pass_context(fn)

    async def init(
            self,
            int1):
        raise NotImplementedError("async def init is not implemented")


cdef api void call_cy_TestService_init(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[int64_t] cPromise,
    int64_t int1
):
    cdef TestServiceInterface __iface
    __iface = self
    __promise = Promise_int64_t.create(move_promise_int64_t(cPromise))
    arg_int1 = int1
    __context = None
    if __iface._pass_context_init:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        TestService_init_coro(
            self,
            __context,
            __promise,
            arg_int1
        )
    )

async def TestService_init_coro(
    object self,
    object ctx,
    Promise_int64_t promise,
    int1
):
    try:
        if ctx is not None:
            result = await self.init(ctx,
                      int1)
        else:
            result = await self.init(
                      int1)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler init:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<int64_t> result)


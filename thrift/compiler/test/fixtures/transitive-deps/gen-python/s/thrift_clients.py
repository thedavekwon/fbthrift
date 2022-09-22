#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.python.client import (
    AsyncClient as _fbthrift_python_AsyncClient,
    SyncClient as _fbthrift_python_SyncClient,
    Client as _fbthrift_python_Client,
)
from thrift.python.client.omni_client import InteractionMethodPosition as _fbthrift_InteractionMethodPosition, FunctionQualifier as _fbthrift_FunctionQualifier
import thrift.python.exceptions as _fbthrift_python_exceptions
import thrift.python.types as _fbthrift_python_types
import s.thrift_types
import s.thrift_metadata
import b.thrift_types
import c.thrift_types

class TestService(_fbthrift_python_Client["TestService.Async", "TestService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "s.TestService"
    
    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return s.thrift_metadata.gen_metadata_service_TestService()
    
    class Async(_fbthrift_python_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "s.TestService"
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return s.thrift_metadata.gen_metadata_service_TestService()
    
        async def test(
            self
        ) -> None:
            _fbthrift_resp = await self._send_request(
                "TestService",
                "test",
                s.thrift_types._fbthrift_TestService_test_args(),
                s.thrift_types._fbthrift_TestService_test_result,
                qualifier = _fbthrift_FunctionQualifier.Unspecified,
            )
            if _fbthrift_resp.ex is not None:
                raise _fbthrift_resp.ex
    
    class Sync(_fbthrift_python_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "s.TestService"
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return s.thrift_metadata.gen_metadata_service_TestService()
    
        def test(
            self
        ) -> None:
            _fbthrift_resp = self._send_request(
                "TestService",
                "test",
                s.thrift_types._fbthrift_TestService_test_args(),
                s.thrift_types._fbthrift_TestService_test_result,
            )
            if _fbthrift_resp.ex is not None:
                raise _fbthrift_resp.ex
    

/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.thrift.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("MyServicePrioChild")
public interface MyServicePrioChild extends java.io.Closeable, test.fixtures.basicannotations.MyServicePrioParent {
    static MyServicePrioChild createBlockingClient(
      final com.facebook.thrift.client.RpcClientFactory _rpcClientFactory,
      final java.net.SocketAddress _socketAddress,
      final org.apache.thrift.ProtocolId _protocolId) {
        MyServicePrioChild.Reactive _delegate = createReactiveClient(
            _rpcClientFactory,
            _socketAddress,
            _protocolId);
        return new MyServicePrioChildReactiveBlockingWrapper(_delegate);
    }

    static MyServicePrioChild createBlockingClient(
      final com.facebook.thrift.client.RpcClientFactory _rpcClientFactory,
      final java.net.SocketAddress _socketAddress,
      final org.apache.thrift.ProtocolId _protocolId,
      final java.util.Map<String, String> _headers,
      final java.util.Map<String, String> _persistentHeaders) {
        MyServicePrioChild.Reactive _delegate = createReactiveClient(
            _rpcClientFactory,
            _socketAddress,
            _protocolId,
            _headers,
            _persistentHeaders);
        return new MyServicePrioChildReactiveBlockingWrapper(_delegate);
    }

    static MyServicePrioChild.Async createAsyncClient(
      final com.facebook.thrift.client.RpcClientFactory _rpcClientFactory,
      final java.net.SocketAddress _socketAddress,
      final org.apache.thrift.ProtocolId _protocolId) {
        MyServicePrioChild.Reactive _delegate = createReactiveClient(
            _rpcClientFactory,
            _socketAddress,
            _protocolId);
        return new MyServicePrioChildReactiveAsyncWrapper(_delegate);
    }

    static MyServicePrioChild.Async createAsyncClient(
      final com.facebook.thrift.client.RpcClientFactory _rpcClientFactory,
      final java.net.SocketAddress _socketAddress,
      final org.apache.thrift.ProtocolId _protocolId,
      final java.util.Map<String, String> _headers,
      final java.util.Map<String, String> _persistentHeaders) {
        MyServicePrioChild.Reactive _delegate = createReactiveClient(
            _rpcClientFactory,
            _socketAddress,
            _protocolId,
            _headers,
            _persistentHeaders);
        return new MyServicePrioChildReactiveAsyncWrapper(_delegate);
    }

    static MyServicePrioChild.Reactive createReactiveClient(
      final com.facebook.thrift.client.RpcClientFactory _rpcClientFactory,
      final java.net.SocketAddress _socketAddress,
      final org.apache.thrift.ProtocolId _protocolId) {
        return new MyServicePrioChildReactiveClient(
            _protocolId,
            _rpcClientFactory.createRpcClient(_socketAddress),
            java.util.Collections.emptyMap(),
            java.util.Collections.emptyMap());
    }

    static MyServicePrioChild.Reactive createReactiveClient(
      final com.facebook.thrift.client.RpcClientFactory _rpcClientFactory,
      final java.net.SocketAddress _socketAddress,
      final org.apache.thrift.ProtocolId _protocolId,
      final java.util.Map<String, String> _headers,
      final java.util.Map<String, String> _persistentHeaders
      ) {
        return new MyServicePrioChildReactiveClient(
            _protocolId,
            _rpcClientFactory.createRpcClient(_socketAddress),
            _headers,
            _persistentHeaders);
    }

    @com.facebook.swift.service.ThriftService("MyServicePrioChild")
    public interface Async extends java.io.Closeable, test.fixtures.basicannotations.MyServicePrioParent.Async {
        @java.lang.Override void close();

        @ThriftMethod(value = "pang")
        ListenableFuture<Void> pang();

        default ListenableFuture<Void> pang(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> pangWrapper(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "pang")
    void pang() throws org.apache.thrift.TException;

    default void pang(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> pangWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("MyServicePrioChild")
    interface Reactive extends reactor.core.Disposable, test.fixtures.basicannotations.MyServicePrioParent.Reactive {
        @ThriftMethod(value = "pang")
        reactor.core.publisher.Mono<Void> pang();

        default reactor.core.publisher.Mono<Void> pang(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> pangWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
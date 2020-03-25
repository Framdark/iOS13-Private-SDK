//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPXPCAutomaticErrorProxy-Protocol.h>

@class NSError, NSString, Protocol;
@protocol NSXPCProxyCreating;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy>
{
    NSObject<NSXPCProxyCreating> *_target;
    Protocol *_protocol;
    NSError *_error;
    id /* CDUnknownBlockType */ _requestWillBeginBlock;
    NSString *_name;
    id _retainSelfWhileMessageIsPending;
    BOOL _isSynchronous;
    _Atomic NSUInteger _retainCounter;
    int _pid;
}

+ (BOOL)sanitizeErrors;
@property(nonatomic) int requestEffectivePid; // @synthesize requestEffectivePid=_pid;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(id /* CDUnknownBlockType */)arg2;
- (id /* CDUnknownBlockType */)_requestWillBegin:(SEL)arg1 requestID:(id)arg2;
- (id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* CDUnknownBlockType */)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* CDUnknownBlockType */)arg6 requestDidFinish:(id /* CDUnknownBlockType */)arg7;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* CDUnknownBlockType */)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5;

@end


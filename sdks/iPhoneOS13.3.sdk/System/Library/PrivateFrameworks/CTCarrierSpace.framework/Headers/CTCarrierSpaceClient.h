//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceClientDelegateProxy, NSXPCConnection, NSXPCListenerEndpoint;
@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClient : NSObject
{
    NSXPCConnection *_connection;
    struct queue _queue;
    struct queue _callbackQueue;
    NSXPCListenerEndpoint *_endpoint;
    CTCarrierSpaceClientDelegateProxy *_delegateProxy;
    id <CTCarrierSpaceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CTCarrierSpaceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)fetchDataPlanMetrics:(id /* CDUnknownBlockType */)arg1;
- (void)purchasePlan:(id)arg1 authInfo:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)purchasePlan:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)refreshAllInfo:(id /* CDUnknownBlockType */)arg1;
- (void)fetchAppsInfo:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchAppsInfo:(id /* CDUnknownBlockType */)arg1;
- (void)fetchPlansInfo:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchPlansInfo:(id /* CDUnknownBlockType */)arg1;
- (void)fetchUsageInfo:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchUsageInfo:(id /* CDUnknownBlockType */)arg1;
- (void)setUserConsent:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getUserConsentFlowInfo:(id /* CDUnknownBlockType */)arg1;
- (void)getCapabilities:(id /* CDUnknownBlockType */)arg1;
- (void)getAuthenticationContext:(id /* CDUnknownBlockType */)arg1;
- (void)userDidAcceptPlanTerms:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)authenticationDidFail:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)authenticationDidComplete:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setUserInAuthFlow:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)refreshAppsInfo:(id /* CDUnknownBlockType */)arg1;
- (void)refreshPlansInfo:(id /* CDUnknownBlockType */)arg1;
- (void)refreshUsageInfo:(id /* CDUnknownBlockType */)arg1;
- (void)testMode:(BOOL)arg1 config:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)invalidate;
- (void)ping:(id /* CDUnknownBlockType */)arg1;
- (id)initWithQueue:(struct dispatch_queue_s )arg1 andListenerEndpoint:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(struct dispatch_queue_s )arg1;
- (id)_proxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_ensureConnected_sync;
- (void)_connect_sync;

@end


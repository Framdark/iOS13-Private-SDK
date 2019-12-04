//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDCircleStateObserver, NSArray;
@protocol CDPDCircleDelegate, CDPDCircleProxy, CDPStateUIProviderInternal, OS_dispatch_queue;

@interface CDPDCircleController : NSObject
{
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_retryQueue;
    unsigned long long _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
    id <CDPStateUIProviderInternal> _uiProvider;
    NSObject<CDPDCircleDelegate> *_delegate;
    id <CDPDCircleProxy> _circleProxy;
}

@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property(nonatomic) __weak NSObject<CDPDCircleDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)cancelApplicationToJoinCircle;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_requestToJoinWithRequestBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)arg1;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)arg1;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)arg1;
- (id)_peerDeviceNamesByPeerID;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;
- (void)resetCircleIncludingCloudKitData:(_Bool)arg1 cloudKitResetReasonDescription:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)_peerCount;
- (void)promptForCredentials:(id /* block */)arg1;
- (long long)nextRetryInterval;
- (_Bool)canRetryCliqueStatus;
- (void)_joinCircleIgnoringBackups:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)joinCircleIgnoringBackups:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)joinCircleWithCompletion:(id /* block */)arg1;
- (void)prepareCircleStateForRecovery;
- (_Bool)synchronizeCircleViews;
- (id)peerID;
- (unsigned long long)circleStatus;
- (void)dealloc;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3;

@end

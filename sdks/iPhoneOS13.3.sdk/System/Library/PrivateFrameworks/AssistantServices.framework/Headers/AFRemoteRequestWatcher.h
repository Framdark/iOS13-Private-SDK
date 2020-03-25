//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationListenerDelegate-Protocol.h>

@class AFSiriActivationListener;
@protocol OS_dispatch_queue;

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _prewarmHandler;
    id /* CDUnknownBlockType */ _requestHandler;
    id /* CDUnknownBlockType */ _dismissalHandler;
    id /* CDUnknownBlockType */ _intentHandler;
    int _speechRequestToken;
    id /* CDUnknownBlockType */ _speechRequestHandler;
    AFSiriActivationListener *_siriActivationListener;
}

// - (void).cxx_destruct;
- (void)setNewSpeechRequestHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_dispatchSpeechRequestOptions:(id)arg1;
- (void)_setupSpeechRequestListener;
- (void)setIntentHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setDismissalHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setRequestHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setNewRequestHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setPrewarmHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_setupRequestListener;
- (void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(NSUInteger)arg3 analyticsContext:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)init;

@end


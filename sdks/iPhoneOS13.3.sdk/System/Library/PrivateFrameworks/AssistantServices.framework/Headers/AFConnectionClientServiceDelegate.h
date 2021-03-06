//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientServiceDelegate-Protocol.h>

@class AFConnection;
@protocol OS_dispatch_queue;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate>
{
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

// - (void).cxx_destruct;
- (oneway void)audioSessionDidBecomeActive:(BOOL)arg1;
- (oneway void)audioSessionWillBecomeActive:(BOOL)arg1;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)willProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (oneway void)audioPlaybackRequestDidStart:(id)arg1;
- (oneway void)audioPlaybackRequestWillStart:(id)arg1;
- (oneway void)audioSessionDidEndInterruption:(BOOL)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (oneway void)speechRecordingDidCancelWithReply:(id /* CDUnknownBlockType */)arg1;
- (oneway void)speechRecordingDidEndWithReply:(id /* CDUnknownBlockType */)arg1;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (oneway void)speechRecordingStartpointDetectedWithReply:(id /* CDUnknownBlockType */)arg1;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 isDucking:(BOOL)arg2 isTwoShot:(BOOL)arg3 speechEndHostTime:(NSUInteger)arg4 reply:(id /* CDUnknownBlockType */)arg5;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (oneway void)extensionRequestWillStartForApplication:(id)arg1;
- (oneway void)cacheImage:(id)arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)getClockContext:(id /* CDUnknownBlockType */)arg1;
- (oneway void)getBulletinContext:(id /* CDUnknownBlockType */)arg1;
- (oneway void)quickStopWasHandledWithActions:(NSUInteger)arg1;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (oneway void)requestHandleCommand:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (oneway void)startUIRequestWithText:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_connectionDelegate;
- (id)initWithConnection:(id)arg1 targetQueue:(id)arg2;

@end


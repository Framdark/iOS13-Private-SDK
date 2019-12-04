//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIResponseKitManaging-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_conversationTurns;
}

+ (id)rewriteMoneyAttributes:(id)arg1;
+ (id)singletonInstance;
+ (id)sharedTIResponseKitManager;
- (id)cannedResponsesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(_Bool)arg7 isBlacklisted:(_Bool)arg8;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (id)responseKitResponseCandidatesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 shouldDisableAutoCaps:(_Bool)arg5;
- (void)addNewConversationTurnToHistory:(id)arg1;
- (void)persistResponseKitDynamicDataToDisk;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;
- (void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(_Bool)arg8;
- (void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(_Bool)arg7 stringIsBlacklisted:(_Bool)arg8 async:(_Bool)arg9 completionHandler:(id /* block */)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

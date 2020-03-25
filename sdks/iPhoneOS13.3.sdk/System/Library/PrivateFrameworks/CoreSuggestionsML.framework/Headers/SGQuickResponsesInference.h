//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGQuickResponsesModel, SGQuickResponsesPersonalization, SGQuickResponsesRanking, SGQuickResponsesStore, _PASRng;

@interface SGQuickResponsesInference : NSObject
{
    SGQuickResponsesStore *_store;
    SGQuickResponsesModel *_model;
    SGQuickResponsesRanking *_ranking;
    SGQuickResponsesPersonalization *_personalization;
    _PASRng *_rng;
}

+ (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 plistPath:(id)arg6;
+ (void)registerDisplayedQuickResponses:(id)arg1 plistPath:(id)arg2;
+ (id)normalizeStringForDeduping:(id)arg1;
+ (id)quickResponsesForMessage:(id)arg1 maxResponses:(NSUInteger)arg2 conversationTurns:(id)arg3 forContext:(id)arg4 time:(id)arg5 locale:(id)arg6 chunkPath:(id)arg7 plistPath:(id)arg8;
+ (id)quickResponsesForMessage:(id)arg1 maximumResponses:(NSUInteger)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4;
+ (id)languageForLocale:(id)arg1 withLanguageDetectionForMessage:(id)arg2;
+ (id)_getMergedPrompt:(id)arg1 withParams:(id)arg2;
+ (id)stringsForQuickResponses:(id)arg1;
// - (void).cxx_destruct;
- (id)addCustomResponsesToCommonResponses:(id)arg1 language:(id)arg2 locale:(id)arg3 modelScores:(id)arg4 maxResponses:(NSUInteger)arg5 customResponsesParams:(id)arg6;
- (id)quickResponsesFromReplyTextIds:(id)arg1 config:(id)arg2;
- (id)randomizedReplyTextIdsForSemanticClass:(NSUInteger)arg1 responseCount:(NSUInteger)arg2 config:(id)arg3;
- (id)replyTextIdsForSemanticClass:(NSUInteger)arg1 responseCount:(NSUInteger)arg2 config:(id)arg3;
- (id)replyTextsFromSemanticClasses:(id)arg1 config:(id)arg2;
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(NSUInteger)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 withLocale:(id)arg7;
- (id)responsesForMessage:(id)arg1 maximumResponses:(NSUInteger)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 withLocale:(id)arg5;
- (id)responsesForMessage:(id)arg1 maximumResponses:(NSUInteger)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4;
- (id)initWithLanguage:(id)arg1 chunkPath:(id)arg2 plistPath:(id)arg3;
- (id)initWithModel:(id)arg1 ranking:(id)arg2 personalization:(id)arg3 rng:(id)arg4 store:(id)arg5;

@end


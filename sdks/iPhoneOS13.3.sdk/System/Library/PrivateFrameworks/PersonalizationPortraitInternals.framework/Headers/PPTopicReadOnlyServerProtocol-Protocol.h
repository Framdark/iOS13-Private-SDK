//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSString, PPTopicQuery;

@protocol PPTopicReadOnlyServerProtocol <PPFeedbackAccepting>
- (void)unmapMappedTopicIdentifier:(NSString *)arg1 mappingIdentifier:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)scoresForTopicMapping:(NSString *)arg1 query:(PPTopicQuery *)arg2 queryId:(NSUInteger)arg3;
- (void)topicRecordsWithQuery:(PPTopicQuery *)arg1 queryId:(NSUInteger)arg2;
- (void)rankedTopicsWithQuery:(PPTopicQuery *)arg1 queryId:(NSUInteger)arg2;
@end


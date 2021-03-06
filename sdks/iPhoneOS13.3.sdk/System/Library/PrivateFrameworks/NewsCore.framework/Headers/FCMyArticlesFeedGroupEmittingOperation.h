//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSSet;
@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    id <FCHeadlineClustering> _headlineClusterer;
    id <FCHeadlineClusterOrdering> _headlineClusterOrderer;
    NSSet *_emittableGroupTypes;
}

@property(retain, nonatomic) NSSet *emittableGroupTypes; // @synthesize emittableGroupTypes=_emittableGroupTypes;
@property(retain, nonatomic) id <FCHeadlineClusterOrdering> headlineClusterOrderer; // @synthesize headlineClusterOrderer=_headlineClusterOrderer;
@property(retain, nonatomic) id <FCHeadlineClustering> headlineClusterer; // @synthesize headlineClusterer=_headlineClusterer;
// - (void).cxx_destruct;
- (id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 translationProvider:(id)arg5;
- (id)_joinedFeedTransformation;
- (id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 feedItemScores:(id)arg2 showStoriesOnlyFromFavorites:(BOOL)arg3;
- (void)_performOperation;
- (void)performOperation;
- (id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2;

@end


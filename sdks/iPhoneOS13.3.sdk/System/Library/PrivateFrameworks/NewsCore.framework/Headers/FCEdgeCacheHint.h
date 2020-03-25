//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>
{
    NSString *_groupName;
    NSString *_cacheControlKey;
}

+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForVideos;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForCoverArticles;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForBreaking;
+ (id)edgeCacheHintForTopStories;
@property(readonly, copy, nonatomic) NSString *cacheControlKey; // @synthesize cacheControlKey=_cacheControlKey;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2;

@end

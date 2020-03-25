//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingItem <NSObject>
- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *))arg1;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
- (BOOL)isHiddenFromAutoFavorites;
@property(nonatomic, readonly) BOOL hasVideo;
- (BOOL)isPaid;
- (BOOL)isANF;
@property(nonatomic, readonly) BOOL hasGlobalUserFeedback;
@property(nonatomic, readonly) double globalUserFeedback;
@property(nonatomic, readonly) NSArray *topicIDs;
@property(nonatomic, readonly) NSString *publisherID;
@property(nonatomic, readonly) NSUInteger halfLife;
@property(nonatomic, readonly) NSDate *publishDate;
@property(nonatomic, readonly) NSString *itemID;
@property(nonatomic, readonly) NSString *sourceFeedID;

@optional
@property(nonatomic, readonly) BOOL isFeatured;
@property(nonatomic, readonly) long long bodyTextLength;
- (BOOL)isBundlePaid;
@end


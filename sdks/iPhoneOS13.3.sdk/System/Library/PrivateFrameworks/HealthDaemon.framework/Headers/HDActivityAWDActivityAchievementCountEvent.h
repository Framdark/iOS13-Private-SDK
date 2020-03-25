//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDActivityAWDActivityAchievementCountEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _totalAchievementCount;
    int _totalOTAAchievementCount;
    int _totalOTAAchievementViewedCount;
    BOOL _moreThanOneYearSinceActivitySetup;
    struct {
        unsigned int timestamp:1;
        unsigned int totalAchievementCount:1;
        unsigned int totalOTAAchievementCount:1;
        unsigned int totalOTAAchievementViewedCount:1;
        unsigned int moreThanOneYearSinceActivitySetup:1;
    } _has;
}

@property(nonatomic) BOOL moreThanOneYearSinceActivitySetup; // @synthesize moreThanOneYearSinceActivitySetup=_moreThanOneYearSinceActivitySetup;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTotalOTAAchievementViewedCount:(id)arg1;
- (id)totalOTAAchievementViewedCountAsString:(int)arg1;
@property(nonatomic) BOOL hasTotalOTAAchievementViewedCount;
@property(nonatomic) int totalOTAAchievementViewedCount; // @synthesize totalOTAAchievementViewedCount=_totalOTAAchievementViewedCount;
- (int)StringAsTotalOTAAchievementCount:(id)arg1;
- (id)totalOTAAchievementCountAsString:(int)arg1;
@property(nonatomic) BOOL hasTotalOTAAchievementCount;
@property(nonatomic) int totalOTAAchievementCount; // @synthesize totalOTAAchievementCount=_totalOTAAchievementCount;
@property(nonatomic) BOOL hasMoreThanOneYearSinceActivitySetup;
- (int)StringAsTotalAchievementCount:(id)arg1;
- (id)totalAchievementCountAsString:(int)arg1;
@property(nonatomic) BOOL hasTotalAchievementCount;
@property(nonatomic) int totalAchievementCount; // @synthesize totalAchievementCount=_totalAchievementCount;
@property(nonatomic) BOOL hasTimestamp;

@end


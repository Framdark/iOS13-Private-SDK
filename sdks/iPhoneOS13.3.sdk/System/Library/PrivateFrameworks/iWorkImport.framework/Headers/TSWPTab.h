//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPTab : NSObject <NSCopying>
{
    double _position;
    int _alignment;
    NSString *_leader;
}

+ (id)tab;
+ (id)displayStringFromTabLeader:(id)arg1;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(BOOL)arg2 isVertical:(BOOL)arg3;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(BOOL)arg2;
+ (id)tabLeaderFromDisplayString:(id)arg1;
+ (id)tabStopLeaderStringArrowRTL;
+ (id)tabStopLeaderStringArrow;
+ (id)tabStopLeaderStringUnderscore;
+ (id)tabStopLeaderStringDash;
+ (id)tabStopLeaderStringPoint;
+ (id)tabStopDisplayStringArrow;
+ (id)tabStopDisplayStringUnderscore;
+ (id)tabStopDisplayStringDash;
+ (id)tabStopDisplayStringPoint;
+ (id)tabStopDisplayStringNone;
+ (id)tabStopAlignmentStringDecimal;
+ (id)tabStopAlignmentStringRight;
+ (id)tabStopAlignmentStringCenter;
+ (id)tabStopAlignmentStringLeft;
+ (id)tabStopAlignmentStringBottom;
+ (id)tabStopAlignmentStringMiddle;
+ (id)tabStopAlignmentStringTop;
@property(copy, nonatomic) NSString *leader; // @synthesize leader=_leader;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double position; // @synthesize position=_position;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPosition:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compareToPosition:(double)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)saveToArchive:(struct TabArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TabArchive )arg1 unarchiver:(id)arg2;
- (id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (id)init;
- (void)setPositionInInches:(double)arg1;
- (double)positionInInches;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration
{
    BOOL _ascending;
    long long _limit;
    CDStruct_ef5fcbe6 _dayIndexRange;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(nonatomic) CDStruct_ef5fcbe6 dayIndexRange; // @synthesize dayIndexRange=_dayIndexRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end


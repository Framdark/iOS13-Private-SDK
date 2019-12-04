//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDStatisticsSourceOrderProvider-Protocol.h>


@class HKQuantityType, NSArray, NSDateInterval, NSString, _HKDateIntervalCollection;
@protocol HDStatisticsCollectionCalculatorDataSource, HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDStatisticsCollectionCalculator : NSObject <HDStatisticsSourceOrderProvider, NSSecureCoding>
{
    struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::__1::default_delete<_HDStatisticsCollectionCalculatorImplementation>> _implementation;
    id /* block */ _statisticsHandler;
    long long _computationMethod;
    NSArray *_maskedIntervals;
    id <HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

+ (id)calculatorForArchivedRepresentation:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4;
@property(nonatomic) __weak id <HDStatisticsCollectionCalculatorSourceOrderProvider> sourceOrderProvider; // @synthesize sourceOrderProvider=_sourceOrderProvider;
@property(copy, nonatomic) id /* block */ statisticsHandler; // @synthesize statisticsHandler=_statisticsHandler;
@property(readonly, copy, nonatomic) NSArray *maskedIntervals; // @synthesize maskedIntervals=_maskedIntervals;
@property(readonly, nonatomic) long long computationMethod; // @synthesize computationMethod=_computationMethod;
- (id).cxx_construct;
- (void)orderSourceIDs:(vector_d87a6415 *)arg1;
- (id)sourceForSourceID:(long long)arg1;
- (id)bundleIdentifierForSourceID:(long long)arg1;
- (id)archivedRepresentationWithError:(id *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)currentStatistics;
- (void)reset;
- (_Bool)invalidateInterval:(id)arg1 error:(id *)arg2;
- (_Bool)queryForInitialStatisticsWithError:(id *)arg1;
- (_Bool)performAddSampleTransaction:(id /* block */)arg1 error:(id *)arg2;
- (_Bool)addSampleValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 error:(id *)arg5;
@property(nonatomic) __weak id <HDStatisticsCollectionCalculatorDataSource> dataSource;
- (void)configureMergeAnchor:(id)arg1;
@property(copy, nonatomic) NSDateInterval *dateInterval;
@property(nonatomic) double mergeGranularity;
- (_Bool)setMaskedIntervals:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long mergeStrategy;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection;
@property(readonly, copy, nonatomic) HKQuantityType *quantityType;
- (id)initForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKCodableQuantitySeries, NSDate, NSDictionary;

@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_discardWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_finishSeriesWithMetadata:(NSDictionary *)arg1 endDate:(NSDate *)arg2 finalSeries:(HKCodableQuantitySeries *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)remote_insertQuantitySeries:(HKCodableQuantitySeries *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end


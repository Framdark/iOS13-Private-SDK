//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol RERelevanceEngineMetricsRecorder <NSObject>

@optional
- (BOOL)ignoreValidMetricCheck;
- (void)recordPredictionMetrics:(NSDictionary *)arg1 forInteraction:(NSString *)arg2;
- (void)recordCallibrationCurveMetrics:(NSDictionary *)arg1 forInteraction:(NSString *)arg2;
- (void)recordTrainingMetrics:(NSDictionary *)arg1 forInteraction:(NSString *)arg2;
@end


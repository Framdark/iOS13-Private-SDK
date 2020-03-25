//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXMDiagnostics : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_diagnosticMetrics;
    NSMutableArray *_queue_visionObservations;
    BOOL _diagnosticsEnabled;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *visionObservations;
- (void)appendVisionObservations:(id)arg1;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(id /* CDUnknownBlockType */)arg3;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(id /* CDUnknownBlockType */)arg3 signpostStartBlock:(id /* CDUnknownBlockType */)arg4 signpostEndBlock:(id /* CDUnknownBlockType */)arg5;
@property(readonly, copy, nonatomic) NSArray *metrics;
- (void)clearMetrics;
- (void)addMetric:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;

@end


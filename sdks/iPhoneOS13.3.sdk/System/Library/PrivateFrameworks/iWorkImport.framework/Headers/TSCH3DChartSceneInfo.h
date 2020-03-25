//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSCH3DScene, TSCHChartInfo, TSCHChartSeriesType, TSCHChartType;

__attribute__((visibility("hidden")))
@interface TSCH3DChartSceneInfo : NSObject <NSCopying>
{
    TSCH3DScene *_scene;
    TSCHChartInfo *_chartInfo;
    TSCHChartType *_chartType;
    TSCHChartSeriesType *_seriesType;
    CDStruct_b1c75024 _layoutSettings;
}

+ (id)infoWithScene:(id)arg1 chartInfo:(id)arg2 chartType:(id)arg3 seriesType:(id)arg4 layoutSettings:(CDStruct_b1c75024)arg5;
@property(readonly, nonatomic) CDStruct_b1c75024 layoutSettings; // @synthesize layoutSettings=_layoutSettings;
@property(readonly, retain, nonatomic) TSCHChartSeriesType *seriesType; // @synthesize seriesType=_seriesType;
@property(readonly, retain, nonatomic) TSCHChartType *chartType; // @synthesize chartType=_chartType;
@property(readonly, retain, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=_chartInfo;
@property(readonly, retain, nonatomic) TSCH3DScene *scene; // @synthesize scene=_scene;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1 chartInfo:(id)arg2 chartType:(id)arg3 seriesType:(id)arg4 layoutSettings:(CDStruct_b1c75024)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXWidgetBarSpec, PXWidgetSpec;

@interface PXWidgetCompositionSpec : NSObject
{
    PXWidgetSpec *_widgetSpec;
    long long _maximumNumberOfColumns;
    PXWidgetBarSpec *_footerSpec;
    long long _disclosureLocation;
    PXWidgetBarSpec *__defaultHeaderSpec;
    PXWidgetBarSpec *__headerSpecForFlushedContent;
}

@property(readonly, nonatomic) PXWidgetBarSpec *_headerSpecForFlushedContent; // @synthesize _headerSpecForFlushedContent=__headerSpecForFlushedContent;
@property(readonly, nonatomic) PXWidgetBarSpec *_defaultHeaderSpec; // @synthesize _defaultHeaderSpec=__defaultHeaderSpec;
@property(readonly, nonatomic) long long disclosureLocation; // @synthesize disclosureLocation=_disclosureLocation;
@property(readonly, nonatomic) PXWidgetBarSpec *footerSpec; // @synthesize footerSpec=_footerSpec;
@property(readonly, nonatomic) long long maximumNumberOfColumns; // @synthesize maximumNumberOfColumns=_maximumNumberOfColumns;
@property(readonly, nonatomic) PXWidgetSpec *widgetSpec; // @synthesize widgetSpec=_widgetSpec;
// - (void).cxx_destruct;
- (id)headerSpecForWidgetContentLayoutStyle:(long long)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 widgetSpec:(id)arg2;
- (id)init;

@end


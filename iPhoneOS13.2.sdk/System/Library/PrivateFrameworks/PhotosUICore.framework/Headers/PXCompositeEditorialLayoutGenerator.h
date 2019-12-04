//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class NSDictionary, PXCompositeEditorialLayoutMetrics;

@interface PXCompositeEditorialLayoutGenerator : PXLayoutGenerator
{
    struct _PXLayoutGeometry *_geometries;
    unsigned long long _geometriesCount;
    double *_layoutItemWeights;
    unsigned long long _layoutItemWeightsCount;
    struct CGSize _contentSize;
    _Bool _isPrepared;
    NSDictionary *_templatesByTileCount;
    long long _minTemplateItemCount;
    long long _maxTemplateItemCount;
    long long _minNumberOfColumns;
}

- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (id)_layoutInputsInRange:(struct _NSRange)arg1;
- (void)_prepareGeometriesBufferForCount:(unsigned long long)arg1;
- (void)_prepareLayoutItemWeightsBufferForCount:(unsigned long long)arg1;
- (void)_normalizeWeightsForInputItems:(id)arg1;
- (id)_minCostingTemplateAmongTemplates:(id)arg1 forFittingInputItems:(id)arg2 inRange:(struct _NSRange)arg3 minCost:(out double *)arg4;
- (void)_enumerateTemplatesWithBlock:(id /* block */)arg1;
- (void)_computeTemplatesByTileCountIfNeeded;
- (void)_prepareIfNeeded;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;

// Remaining properties
@property(copy, nonatomic) PXCompositeEditorialLayoutMetrics *metrics; // @dynamic metrics;

@end

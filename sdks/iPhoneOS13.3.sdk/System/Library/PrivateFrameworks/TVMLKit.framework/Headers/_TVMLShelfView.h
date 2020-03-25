//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVShelfView.h>

#import <TVMLKit/TVRowHosting_Collection-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TVMLShelfView : _TVShelfView <TVRowHosting_Collection>
{
    double _showcaseFactor;
}

- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (UIEdgeInsets)_selectionMarginsForCell:(id)arg1;
@property(readonly, nonatomic) BOOL shouldBindRowsTogether;
- (id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long )arg3 forShowcase:(BOOL)arg4;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long )arg3;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long )arg2;
- (void)layoutSubviews;
- (void)tv_setShowcaseFactor:(double)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 _shelfViewLayout:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHSageGeometryHelper.h>

__attribute__((visibility("hidden")))
@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper
{
    double mVerticalAxisOverhang;
    double mHorizontalAxisOverhang;
    double mRightAxisWidthChange;
    double mBottomAxisHeightChange;
    double mTopAxisHeightChange;
    CGSize mBottomLeftChartTitleOverhang;
    CGSize mTopRightChartTitleOverhang;
    CGSize mBottomLeftValueAxisTitleOverhang;
    CGSize mTopRightValueAxisTitleOverhang;
    CGSize mBottomLeftCategoryAxisTitleOverhang;
    CGSize mTopRightCategoryAxisTitleOverhang;
    CGSize mBottomLeftValueAxisY2TitleOverhang;
    CGSize mTopRightValueAxisY2TitleOverhang;
    CGRect mChartBodyBounds;
    CGRect mExplodedBounds;
    CGRect mChartTitleBounds;
    CGRect mValueAxisTitleBounds;
    CGRect mCategoryAxisTitleBounds;
    CGRect mValueAxisY2TitleBounds;
    CGRect mTopLegendBounds;
    CGRect mLeftLegendBounds;
    CGRect mBottomLegendBounds;
    CGRect mRightLegendBounds;
    CGRect mTopAxisLabelsBounds;
    CGRect mLeftAxisLabelsBounds;
    CGRect mBottomAxisLabelsBounds;
    CGRect mRightAxisLabelsBounds;
    CGRect mTopAxisBounds;
    CGRect mLeftAxisBounds;
    CGRect mBottomAxisBounds;
    CGRect mRightAxisBounds;
    CGPoint mExplodedBodyShift;
    CGPoint mOutsideLabelsChartTitleShift;
    BOOL mChartLayoutValid;
    BOOL mChartExplodedSizeValid;
    BOOL mChartAxisSizeValid;
    BOOL mChartAxisLabelsSizeValid;
    BOOL mChartTitleSizeValid;
    BOOL mValueAxisTitleSizeValid;
    BOOL mCategoryAxisTitleSizeValid;
    BOOL mValueAxisY2TitleSizeValid;
    BOOL mChartLegendSizeValid;
    BOOL mChartValueElementsGeometryValid;
}

+ (CGRect)computeSageChartAreaBoundsForChartInfo:(id)arg1 geometryRect:(CGRect)arg2 returningContainingViewportSize:(id )arg3;
- (CGSize)measureText:(id)arg1 withParagraphStyle:(id)arg2;
- (double)seriesCategoryLabelsHorizontalGutter;
- (double)seriesCategoryLabelsVerticalGutter;
- (double)distanceFromYAxisUsingParagraphStyle:(id)arg1;
- (double)distanceFromXAxisUsingParagraphStyle:(id)arg1;
- (double)yAxisTitlePadding:(BOOL)arg1;
- (double)xAxisTitlePadding;
- (double)chartTitlePadding;
- (double)yAxisLabelHeight:(BOOL)arg1;
- (double)xAxisLabelHeight;
- (double)fontHeight:(id)arg1;
- (double)_horizontalAxisLabelsHeight;
- (double)_verticalAxisLabelsWidth:(BOOL)arg1;
- (double)_topAxisOuterWidth;
- (double)_rightAxisOuterWidth;
- (double)_bottomAxisOuterWidth;
- (double)_leftAxisOuterWidth;
- (double)p_widthFromTicksAndStrokeForAxis:(id)arg1;
- (double)_seriesSymbolWidth;
- (void)calculateChartBodySize;
- (BOOL)calculateChartExplodedSize;
- (void)calculateValueAxisY2TitleSize;
- (void)calculateCategoryAxisTitleSize;
- (void)calculateValueAxisTitleSize;
- (void)calculateChartTitleSize;
- (void)calculateChartAxisSize;
- (BOOL)topAxisLabelsVisible;
- (BOOL)bottomAxisLabelsVisible;
- (BOOL)rightAxisLabelsVisible;
- (BOOL)leftAxisLabelsVisible;
- (BOOL)p_labelsVisible:(id)arg1;
- (void)calculateChartAxisLabelsSize;
- (CGRect)computeSageLayoutCBBForSpiceDoc:(BOOL)arg1;
- (id)p_model;
- (BOOL)aspectRatioLocked;
- (BOOL)isScatter;
- (BOOL)isLine;
- (BOOL)isArea;
- (BOOL)isVertical;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIFlexibleSegmentedControlDelegate-Protocol.h>

@class NSArray, NSString, SKUIFlexibleSegmentedControl, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnsView : UIView <SKUIFlexibleSegmentedControlDelegate>
{
    NSArray *_allViewControllers;
    long long _animatingToNumberOfVisibleColumns;
    UIVisualEffectView *_effectView;
    UIView *_borderView0;
    UIView *_borderView1;
    long long _columnChangeAnimationCount;
    NSArray *_columnViews;
    struct UIEdgeInsets _contentInset;
    UIView *_headerBackgroundView;
    UIView *_headerBackgroundBottomBorder;
    NSArray *_headerViews;
    long long _numberOfVisibleColumns;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}

@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) long long numberOfVisibleColumns; // @synthesize numberOfVisibleColumns=_numberOfVisibleColumns;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSArray *chartViewControllers; // @synthesize chartViewControllers=_allViewControllers;
- (void)_reloadColumnViews;
- (id)_headerViewWithViewControllers:(id)arg1;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)_headerViewAction:(id)arg1;
- (void)layoutSubviews;
- (void)endColumnChangeAnimation;
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

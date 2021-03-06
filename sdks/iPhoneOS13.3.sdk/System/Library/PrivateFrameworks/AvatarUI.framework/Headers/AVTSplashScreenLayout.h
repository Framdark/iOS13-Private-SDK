//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVTSplashScreenLayoutDelegate;

@interface AVTSplashScreenLayout : NSObject
{
    BOOL _wantsSecondaryVideo;
    BOOL _constrainToContainer;
    BOOL _needsLayout;
    id <AVTSplashScreenLayoutDelegate> _delegate;
    NSUInteger _labelEdgePaddingStyle;
    NSString *_currentContentSizeCategory;
    CGSize _containerSize;
    CGSize _unconstrainedContentSize;
    UIEdgeInsets _edgeInsets;
    CGRect _titleFrame;
    CGRect _subTitleFrame;
    CGRect _primaryVideoFrame;
    CGRect _secondaryVideoFrame;
    CGRect _buttonFrame;
}

+ (CGRect)secondaryVideoFrameForContentFrame:(CGRect)arg1;
+ (CGRect)primaryVideoFrameForContentFrame:(CGRect)arg1 wantsSecondaryVideo:(BOOL)arg2;
+ (CGRect)subTitleFrameForString:(id)arg1 titleFrame:(CGRect)arg2 buttonFrame:(CGRect)arg3 wantsSecondaryVideo:(BOOL)arg4 containerSize:(CGSize)arg5 labelEdgePadding:(double)arg6;
+ (CGRect)titleFrameForString:(id)arg1 yOrigin:(double)arg2 containerSize:(CGSize)arg3 labelEdgePadding:(double)arg4;
+ (CGRect)buttonFrameForString:(id)arg1 containerSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3;
+ (double)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(NSUInteger)arg1 contentSizeCategory:(id)arg2 numberOfLines:(long long)arg3;
+ (id)buttonFont;
+ (id)subTitleFont;
+ (id)titleFont;
+ (id)blueButton;
+ (NSUInteger)appropriateLabelEdgePaddingStyleForViewSize:(CGSize)arg1;
+ (CGSize)secondaryVideoSize;
+ (CGSize)primaryVideoSize;
+ (BOOL)isSmallScreen;
@property(nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
@property(copy, nonatomic) NSString *currentContentSizeCategory; // @synthesize currentContentSizeCategory=_currentContentSizeCategory;
@property(nonatomic) BOOL constrainToContainer; // @synthesize constrainToContainer=_constrainToContainer;
@property(nonatomic) BOOL wantsSecondaryVideo; // @synthesize wantsSecondaryVideo=_wantsSecondaryVideo;
@property(readonly, nonatomic) CGSize unconstrainedContentSize; // @synthesize unconstrainedContentSize=_unconstrainedContentSize;
@property(nonatomic) CGRect buttonFrame; // @synthesize buttonFrame=_buttonFrame;
@property(nonatomic) CGRect secondaryVideoFrame; // @synthesize secondaryVideoFrame=_secondaryVideoFrame;
@property(nonatomic) CGRect primaryVideoFrame; // @synthesize primaryVideoFrame=_primaryVideoFrame;
@property(nonatomic) CGRect subTitleFrame; // @synthesize subTitleFrame=_subTitleFrame;
@property(nonatomic) CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) NSUInteger labelEdgePaddingStyle; // @synthesize labelEdgePaddingStyle=_labelEdgePaddingStyle;
@property(readonly, nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) __weak id <AVTSplashScreenLayoutDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)didChangeContentSizeCategory:(id)arg1;
- (void)calculateLayoutWithTitleString:(id)arg1 subTitleString:(id)arg2 buttonTitle:(id)arg3;
- (void)dealloc;
- (id)initWithContainerSize:(CGSize)arg1 edgeInsets:(UIEdgeInsets)arg2 wantsSecondaryVideo:(BOOL)arg3 labelEdgePaddingStyle:(NSUInteger)arg4 currentContentSizeCategory:(id)arg5;
- (id)initWithContainerSize:(CGSize)arg1 edgeInsets:(UIEdgeInsets)arg2 wantsSecondaryVideo:(BOOL)arg3 labelEdgePaddingStyle:(NSUInteger)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/TVMediaProviding-Protocol.h>
#import <TVMLKit/TVObserving-Protocol.h>
#import <TVMLKit/_TVCollectionViewDelegate-Protocol.h>

@class IKAudioElement, IKImageElement, IKMediaContentElement, IKViewElement, NSArray, TVMediaInfo, TVObservableEventController, UIImage, UIView, UIViewController, _TVFocusCaptureView, _TVStackCollectionView, _TVStackWrappingView;
@protocol TVMediaPlaying;

@interface _TVStackCommonTemplateController : _TVBgImageLoadingViewController <UIGestureRecognizerDelegate, TVAppTemplateImpressionable, TVObserving, _TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVMediaProviding>
{
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    double _impressionThreshold;
    IKViewElement *_viewElement;
    _TVStackCollectionView *_collectionView;
    IKViewElement *_collectionListElement;
    TVObservableEventController *_observableEventController;
    IKAudioElement *_audioElement;
    IKViewElement *_backgroundElement;
    IKImageElement *_heroImgElement;
    IKImageElement *_bgImgElement;
    IKImageElement *_uberImgElement;
    IKMediaContentElement *_bgMediaContentElement;
    UIImage *_bgImage;
    id <TVMediaPlaying> _mediaPlayer;
    TVMediaInfo *_selectedMediaInfo;
    NSArray *_supplementaryViewControllers;
    UIViewController *_focusedSupplementaryViewController;
}

@property(retain, nonatomic) UIViewController *focusedSupplementaryViewController; // @synthesize focusedSupplementaryViewController=_focusedSupplementaryViewController;
@property(copy, nonatomic) NSArray *supplementaryViewControllers; // @synthesize supplementaryViewControllers=_supplementaryViewControllers;
@property(retain, nonatomic) TVMediaInfo *selectedMediaInfo; // @synthesize selectedMediaInfo=_selectedMediaInfo;
@property(nonatomic) __weak id <TVMediaPlaying> mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) IKMediaContentElement *bgMediaContentElement; // @synthesize bgMediaContentElement=_bgMediaContentElement;
@property(retain, nonatomic) IKImageElement *uberImgElement; // @synthesize uberImgElement=_uberImgElement;
@property(retain, nonatomic) IKImageElement *bgImgElement; // @synthesize bgImgElement=_bgImgElement;
@property(retain, nonatomic) IKImageElement *heroImgElement; // @synthesize heroImgElement=_heroImgElement;
@property(retain, nonatomic) IKViewElement *backgroundElement; // @synthesize backgroundElement=_backgroundElement;
@property(retain, nonatomic) IKAudioElement *audioElement; // @synthesize audioElement=_audioElement;
@property(readonly, nonatomic) TVObservableEventController *observableEventController; // @synthesize observableEventController=_observableEventController;
@property(retain, nonatomic) IKViewElement *collectionListElement; // @synthesize collectionListElement=_collectionListElement;
@property(retain, nonatomic) _TVStackCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (void)_mediaPlayerCoverImageDidChange;
- (void)_mediaPlayerStateDidChange;
- (long long)_supplementaryViewSectionIndex;
- (void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)_preferredFocusedSupplementaryView;
- (void)_disableScrollingIfNecessary:(id)arg1;
- (id)_modalPresenterPresentedViewController;
- (void)_updateViewLayout;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateViewSupplementaryViews;
- (void)_updateBackgroundViews;
- (void)_updateViewOverlay;
- (id)_overlayView;
- (id)_flowLayout;
- (BOOL)_updateSupplementaryViewControllersWithElements:(id)arg1 updateStyles:(BOOL)arg2;
- (id)viewControllerWithElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;
- (BOOL)_shouldLoadBackgroundImageAsynchronously;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (BOOL)_isBackdropNeeded;
- (long long)_blurEffectStyle;
- (BOOL)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (CGSize)_backgroundImageProxySize;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_cancelImpressionsUpdate;
- (void)_updateImpressions;
- (id)parsedMediaInfo;
- (void)updateBackgroundAndBackdropMaskFactor;
- (void)updateBackgroundAndBackdrop;
- (void)didUpdateSupplementarySectionInfo;
- (BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)scrollToTop;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)loadView;
@property(readonly, retain, nonatomic) _TVStackWrappingView *stackWrappingView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;

@end


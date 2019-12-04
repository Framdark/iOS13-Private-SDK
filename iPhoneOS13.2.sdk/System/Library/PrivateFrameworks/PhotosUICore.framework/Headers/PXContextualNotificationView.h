//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVAsset, AVPlayerItem, AVVideoComposition, NSArray, NSLayoutConstraint, NSString, PXCapsuleButton, PXContextualNotification, PXContextualNotificationChevronView, PXImageRequester, PXVideoPlayerView, UIImage, UIImageView, UILabel;

@interface PXContextualNotificationView : UIView <PXChangeObserver>
{
    _Bool _useRegularHitTesting;
    long long _style;
    PXContextualNotification *_contextualNotification;
    NSString *_title;
    UIImage *_titleIcon;
    NSString *_message;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    UIView *_contentView;
    UIImage *_placeholderImage;
    PXImageRequester *_imageRequester;
    UILabel *_titleLabel;
    UIImageView *_titleIconView;
    UILabel *_messageLabel;
    UIImageView *_dismissIconView;
    PXVideoPlayerView *_mediaView;
    NSLayoutConstraint *_mediaViewHeightConstraint;
    double __mediaAspectRatio;
    AVPlayerItem *__loopingPlayerItem;
    PXCapsuleButton *_actionButton;
    PXContextualNotificationChevronView *_chevronView;
    NSArray *_constraints;
}

@property(copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) PXContextualNotificationChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) PXCapsuleButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem; // @synthesize _loopingPlayerItem=__loopingPlayerItem;
@property(nonatomic, setter=_setMediaAspectRatio:) double _mediaAspectRatio; // @synthesize _mediaAspectRatio=__mediaAspectRatio;
@property(readonly, nonatomic) NSLayoutConstraint *mediaViewHeightConstraint; // @synthesize mediaViewHeightConstraint=_mediaViewHeightConstraint;
@property(readonly, nonatomic) PXVideoPlayerView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) UIImageView *dismissIconView; // @synthesize dismissIconView=_dismissIconView;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIImageView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool useRegularHitTesting; // @synthesize useRegularHitTesting=_useRegularHitTesting;
@property(copy, nonatomic) AVVideoComposition *loopingVideoComposition; // @synthesize loopingVideoComposition=_loopingVideoComposition;
@property(copy, nonatomic) AVAsset *loopingVideoAsset; // @synthesize loopingVideoAsset=_loopingVideoAsset;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak PXContextualNotification *contextualNotification; // @synthesize contextualNotification=_contextualNotification;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handleActionButton:(id)arg1;
- (_Bool)isPointInsidePassthroughArea:(struct CGPoint)arg1;
- (_Bool)isPointInsideDismissArea:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_startLoopingWithItem:(id)arg1;
- (void)_handleDidSetVideoAudioSession;
- (void)_updateLoopingPlayerItem;
- (void)setPlaceholderImage:(id)arg1 imageRequester:(id)arg2;
- (void)_updateMessageLabelForCMMCard;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

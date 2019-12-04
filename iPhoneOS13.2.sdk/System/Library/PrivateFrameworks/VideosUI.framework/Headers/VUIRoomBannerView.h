//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKViewElement, VUIFocusableTextView, VUILabel, VUIRoomBannerLayout, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIRoomBannerView : UIView
{
    IKViewElement *_viewElement;
    VUILabel *_titleLabel;
    VUIFocusableTextView *_descriptionLabel;
    VUIRoomBannerLayout *_layout;
    _TVImageView *_backgroundImage;
    VUISeparatorView *_separatorView;
}

@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) _TVImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) VUIRoomBannerLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) VUIFocusableTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

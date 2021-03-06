//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumberFormatter, NSString, PXRoundedCornerOverlayView, UIImage, UIImageView, UILabel, UIView;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell
{
    NSNumberFormatter *_quantityNumberFormatter;
    CGRect _unitRect;
    BOOL _isFavorite;
    BOOL _isReordering;
    UIImageView *_avatarView;
    NSString *_name;
    NSUInteger _photoQuantity;
    double _textAlpha;
    UILabel *_quantityLabel;
    UILabel *_nameLabel;
    UIView *_actionIndicatorView;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

+ (double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(BOOL)arg4;
@property(retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic, setter=setReordering:) BOOL isReordering; // @synthesize isReordering=_isReordering;
@property(retain, nonatomic) UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(nonatomic) NSUInteger photoQuantity; // @synthesize photoQuantity=_photoQuantity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
// - (void).cxx_destruct;
- (UIColor )_placeHolderColor;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateType;
- (long long)_preferredSizeClass;
- (double)avatarCenterYOffset;
- (void)setSelected:(BOOL)arg1;
@property(nonatomic, getter=isActionIndicatorHidden) BOOL actionIndicatorHidden;
@property(retain, nonatomic) UIImage *image;
- (void)setImage:(id)arg1 normalizedFaceRect:(CGRect)arg2;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end


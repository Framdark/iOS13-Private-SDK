//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout
{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    CGSize _maxImageSize;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
    CGSize _videoSize;
    NSUInteger _visibleFields;
}

@property(nonatomic) NSUInteger visibleFields; // @synthesize visibleFields=_visibleFields;
@property(nonatomic) CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
// - (void).cxx_destruct;
- (void)_removeHighlightViews;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (id)_newDefaultLabel;
- (void)_layoutFieldsVertical;
- (void)_layoutFieldsHorizontal;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setItemOffer:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *videoThumbnailImage;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *category;
@property(copy, nonatomic) NSString *artistName;
- (CGSize)cellSizeForImageOfSize:(CGSize)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end


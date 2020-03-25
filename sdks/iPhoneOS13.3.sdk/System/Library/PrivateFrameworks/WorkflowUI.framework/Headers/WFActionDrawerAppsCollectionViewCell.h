//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UILabel, WFCircularImageView;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell
{
    NSString *_title;
    UIImage *_appIconImage;
    WFCircularImageView *_imageView;
    UILabel *_titleLabel;
}

+ (CGSize)preferredSize;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak WFCircularImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIImage *appIconImage; // @synthesize appIconImage=_appIconImage;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureWithTitle:(id)arg1 appIconImage:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

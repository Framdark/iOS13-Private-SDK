//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell
{
    UIView *_pageContentView;
    struct UIEdgeInsets _additionnalContentInsets;
}

+ (id)cellIdentifier;
@property(nonatomic) struct UIEdgeInsets additionnalContentInsets; // @synthesize additionnalContentInsets=_additionnalContentInsets;
@property(retain, nonatomic) UIView *pageContentView; // @synthesize pageContentView=_pageContentView;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

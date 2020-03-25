//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell
{
    BOOL _editing;
    BOOL _hidesCheckmark;
    UIImageView *_checkmark;
    CGRect _contentAlignmentRect;
    UIEdgeInsets _contentInsets;
    UIEdgeInsets _marginInsets;
}

@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(nonatomic) BOOL hidesCheckmark; // @synthesize hidesCheckmark=_hidesCheckmark;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) CGRect contentAlignmentRect; // @synthesize contentAlignmentRect=_contentAlignmentRect;
// - (void).cxx_destruct;
- (void)updateCheckmarkImage;
- (UIEdgeInsets)_horizontalSafeAreaInsets;
@property(readonly, nonatomic) UIEdgeInsets contentAlignmentInsets;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)description;

@end

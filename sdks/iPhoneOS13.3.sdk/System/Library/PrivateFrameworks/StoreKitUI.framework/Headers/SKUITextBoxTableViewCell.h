//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUITextBoxTableViewCell : SKUITableViewCell
{
    SKUITextBoxView *_textBoxView;
    UIEdgeInsets _textBoxInsets;
}

@property(nonatomic) UIEdgeInsets textBoxInsets; // @synthesize textBoxInsets=_textBoxInsets;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView; // @synthesize textBoxView=_textBoxView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

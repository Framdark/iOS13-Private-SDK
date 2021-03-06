//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUTitleValueCell.h>

#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUEditableTextCellProtocol-Protocol.h>

@class UITextField;

@interface HUEditableTextCell : HUTitleValueCell <HUEditableTextCellProtocol, HUDisableableCellProtocol>
{
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
// - (void).cxx_destruct;
- (void)prepareForReuse;
@property(nonatomic, getter=isDisabled) BOOL disabled;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


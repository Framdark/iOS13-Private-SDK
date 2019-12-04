//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <AnnotationKit/AKInkIsUpdatable-Protocol.h>
#import <AnnotationKit/AKLineWidthChooserUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class NSString, UIImageView;

@interface AKUserInterfaceItemTableViewCell : UITableViewCell <AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable>
{
    UIImageView *_imageView;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (_Bool)wantsInkUpdate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString, UIImage;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    UIImage *_image;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setImage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)_immutableCopy;
- (_Bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (_Bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

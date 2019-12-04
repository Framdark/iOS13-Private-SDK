//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary, NSLocale, NSString;

@interface SXWebContentConfiguration : NSObject <NSMutableCopying>
{
    NSString *_storeFront;
    NSLocale *_locale;
    NSString *_contentSizeCategory;
    NSDictionary *_dataSources;
    struct CGSize _canvasSize;
    struct CGRect _contentFrame;
}

@property(copy, nonatomic) NSDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *storeFront; // @synthesize storeFront=_storeFront;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentSizeCategory:(id)arg3 canvasSize:(struct CGSize)arg4 contentFrame:(struct CGRect)arg5 dataSources:(id)arg6;

@end

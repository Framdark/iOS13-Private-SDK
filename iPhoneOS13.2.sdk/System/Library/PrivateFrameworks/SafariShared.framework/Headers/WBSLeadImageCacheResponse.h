//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

@class UIImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse
{
    UIImage *_thumbnail;
}

+ (id)responseWithURL:(id)arg1 thumbnail:(id)arg2;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (id)initWithURL:(id)arg1 thumbnail:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AVAsset, NSData, NSDictionary, NSString, NSURL, TSPData, TSPPackage, TSUColor;
@protocol TSPCryptoInfo, TSPMutableCryptoInfo;

@protocol TSPDataStorage 
@property(readonly, nonatomic) _Bool readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) _Bool isMissingData;
@property(readonly, nonatomic) _Bool isReadable;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (void)performIOChannelReadWithAccessor:(void (^)(id <TSUReadChannel>))arg1;
- (_Bool)isInPackage:(TSPPackage *)arg1;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
-     // Error parsing type: @"TSPDataStorageWriteResult"56@0:8@"TSPData"16@"TSPPackageWriter"24^{DataInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DataAttributes}^{EncryptionInfo}QBi}32@"NSString"40^@48, name: writeData:toPackageWriter:infoMessage:preferredFilename:error:
-     // Error parsing type: B40@0:8^{DataInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DataAttributes}^{EncryptionInfo}QBi}16@"<TSPDataArchiver>"24@"TSPPackageWriter"32, name: archiveInfoMessage:archiver:packageWriter:
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 forData:(TSPData *)arg2;
- (NSData *)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;

@optional
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) TSUColor *fallbackColor;
@property(readonly, nonatomic) unsigned int CRC;
@property(readonly, nonatomic) id <TSPCryptoInfo> decryptionInfo;
@property(nonatomic) _Bool gilligan_isRemote;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)performReadOnBookmarkDataSourceURLWithAccessor:(void (^)(NSURL *))arg1;
- (void)addDownloadObserver:(id)arg1 forData:(TSPData *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(id, TSPData *, long long, NSDictionary *))arg4;
- (void)setIsMissingData:(_Bool)arg1;
- (_Bool)linkOrCopyToURL:(NSURL *)arg1 encryptionInfo:(id <TSPMutableCryptoInfo>)arg2 canLink:(_Bool)arg3;
- (id)storageForDataCopyFromOtherContext;
- (void)didInitializeFromDocumentURL:(NSURL *)arg1;
@end

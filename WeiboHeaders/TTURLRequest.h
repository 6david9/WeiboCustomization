/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface TTURLRequest : NSObject
{
    NSString *_URL;
    NSString *_httpMethod;
    NSData *_httpBody;
    NSMutableDictionary *_parameters;
    NSMutableDictionary *_headers;
    NSString *_contentType;
    NSMutableArray *_delegates;
    NSMutableArray *_files;
    id <TTURLResponse> _response;
    int _cachePolicy;
    double _cacheExpirationAge;
    NSString *_cacheKey;
    NSDate *timestamp;
    int _totalBytesLoaded;
    int _totalBytesExpected;
    id _userInfo;
    BOOL _isLoading;
    BOOL _shouldHandleCookies;
    BOOL _respondedFromCache;
}

+ (id)requestWithURL:(id)arg1 delegate:(id)arg2;
+ (id)request;
@property(readonly, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) BOOL respondedFromCache; // @synthesize respondedFromCache=_respondedFromCache;
@property(nonatomic) int totalBytesExpected; // @synthesize totalBytesExpected=_totalBytesExpected;
@property(nonatomic) int totalBytesLoaded; // @synthesize totalBytesLoaded=_totalBytesLoaded;
@property(nonatomic) BOOL shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) double cacheExpirationAge; // @synthesize cacheExpirationAge=_cacheExpirationAge;
@property(nonatomic) int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) id <TTURLResponse> response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
- (id)createNSURLRequest;
- (void)cancel;
- (BOOL)send;
- (void)addFile:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (id)generatePostBody;
- (id)generateCacheKey;
- (id)md5HexDigest:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

@end


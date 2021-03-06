/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSString, NSURLConnection, TTURLRequestQueue;

@interface TTRequestLoader : NSObject
{
    NSString *_URL;
    TTURLRequestQueue *_queue;
    NSString *_cacheKey;
    int _cachePolicy;
    double _cacheExpirationAge;
    NSMutableArray *_requests;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_response;
    NSMutableData *_responseData;
    int _retriesLeft;
}

@property(readonly, nonatomic) double cacheExpirationAge; // @synthesize cacheExpirationAge=_cacheExpirationAge;
@property(readonly, nonatomic) int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (BOOL)cancel:(id)arg1;
- (void)load:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
@property(readonly, nonatomic) BOOL isLoading;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dispatchError:(id)arg1;
- (void)dispatchLoaded:(id)arg1;
- (void)dispatchLoadedBytes:(int)arg1 expected:(int)arg2;
- (id)processResponse:(id)arg1 data:(id)arg2;
- (void)cancel;
- (void)connectToURL:(id)arg1;
- (void)dealloc;
- (id)initForRequest:(id)arg1 queue:(id)arg2;

@end


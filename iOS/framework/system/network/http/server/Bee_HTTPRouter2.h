//
//	 ______    ______    ______
//	/\  __ \  /\  ___\  /\  ___\
//	\ \  __<  \ \  __\_ \ \  __\_
//	 \ \_____\ \ \_____\ \ \_____\
//	  \/_____/  \/_____/  \/_____/
//
//
//	Copyright (c) 2013-2014, {Bee} open source community
//	http://www.bee-framework.com
//
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//

#import "Bee_Precompile.h"
#import "Bee_Package.h"
#import "Bee_Foundation.h"
#import "Bee_HTTPPackage.h"
#import "Bee_HTTPConnection2.h"

#pragma mark -

AS_PACKAGE( BeePackage_HTTP, BeeHTTPRouter2, router );

#pragma mark -

typedef void (^BeeHTTPRouter2Block)( void );

#pragma mark -

@interface BeeHTTPRouter2 : NSObject

AS_SINGLETON( BeeHTTPRouter2 )

@property (nonatomic, retain) NSMutableDictionary *	routes;
@property (nonatomic, copy) BeeHTTPRouter2Block		index;

- (void)route:(NSString *)url;
- (void)route:(NSString *)url action:(BeeHTTPRouter2Block)block;
- (void)index:(BeeHTTPRouter2Block)block;

- (id)objectAtIndexedSubscript:(NSUInteger)index;
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)index;

- (id)objectForKeyedSubscript:(id)key;
- (void)setObject:(id)obj forKeyedSubscript:(id)key;

@end

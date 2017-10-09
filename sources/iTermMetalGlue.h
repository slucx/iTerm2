//
//  iTermMetalGlue.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 10/8/17.
//

#import <Foundation/Foundation.h>
#import "iTermMetalTestDriver.h"

NS_ASSUME_NONNULL_BEGIN

@class iTermTextDrawingHelper;
@class VT100Screen;
@class PTYTextView;

@interface iTermMetalGlue : NSObject<iTermMetalTestDriverDataSource>

@property (nullable, nonatomic, strong) PTYTextView *textView;
@property (nonatomic, strong) VT100Screen *screen;

@end

NS_ASSUME_NONNULL_END

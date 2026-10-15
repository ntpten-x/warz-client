// CkCsv.h: interface for the CkCsv class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkCsv_H
#define _CkCsv_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkStringBuilder;
class CkZip;
class CkStringTable;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCsv
class CK_VISIBLE_PUBLIC CkCsv  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkCsv(const CkCsv &);
	CkCsv &operator=(const CkCsv &);

    public:
	CkCsv(void);
	virtual ~CkCsv(void);

	static CkCsv *createNew(void);
	static CkCsv *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls whether leading and trailing whitespace is removed from values returned
	// by GetCell and GetCellByName.
	// 
	//     * When true, surrounding whitespace such as spaces and tabs is removed
	//     from returned cell values.
	//     * When false, returned cell values are not trimmed. This is the default.
	// 
	// This property does not modify the cell contents stored in the CSV and does not
	// change the text written by the save methods. It also does not trim the names
	// returned by GetColumnName.
	// 
	bool get_AutoTrim(void);
	// Controls whether leading and trailing whitespace is removed from values returned
	// by GetCell and GetCellByName.
	// 
	//     * When true, surrounding whitespace such as spaces and tabs is removed
	//     from returned cell values.
	//     * When false, returned cell values are not trimmed. This is the default.
	// 
	// This property does not modify the cell contents stored in the CSV and does not
	// change the text written by the save methods. It also does not trim the names
	// returned by GetColumnName.
	// 
	void put_AutoTrim(bool newVal);

	// Controls the line endings used by SaveFile, SaveFile2, SaveToString, and
	// SaveToSb.
	// 
	//     * When true, records are terminated with CRLF. This is the default.
	//     * When false, records are terminated with LF.
	// 
	// The original line-ending style of loaded data is not preserved. The selected
	// line ending is used for all output records, including the final record.
	// 
	bool get_Crlf(void);
	// Controls the line endings used by SaveFile, SaveFile2, SaveToString, and
	// SaveToSb.
	// 
	//     * When true, records are terminated with CRLF. This is the default.
	//     * When false, records are terminated with LF.
	// 
	// The original line-ending style of loaded data is not preserved. The selected
	// line ending is used for all output records, including the final record.
	// 
	void put_Crlf(bool newVal);

	// Specifies the single character used to separate fields within each CSV record.
	// The default value is a comma (,).
	// 
	// Although this property has a string type, only the first character of a
	// non-empty value is used. Assigning an empty string does not clear or reset the
	// current delimiter.
	// 
	// If the delimiter has not been explicitly set, Chilkat detects it while loading
	// the first CSV data and updates this property with the detected character. The
	// detection may examine more than the first record. Once selected or detected, the
	// delimiter remains in effect for subsequent loads performed by the same object.
	// To load data that uses a different delimiter, explicitly set this property
	// before loading or use a new Csv object.
	// 
	// A semicolon (;) is commonly used in locales where a comma is used as the decimal
	// separator.
	// 
	// Creating a new CSV: Set this property before adding rows or columns when a
	// delimiter other than comma is required.
	// 
	// Vertical-bar delimiter: If this property is explicitly set to |, and
	// EnableQuotes has not been explicitly set, EnableQuotes defaults to false.
	// 
	void get_Delimiter(CkString &str);
	// Specifies the single character used to separate fields within each CSV record.
	// The default value is a comma (,).
	// 
	// Although this property has a string type, only the first character of a
	// non-empty value is used. Assigning an empty string does not clear or reset the
	// current delimiter.
	// 
	// If the delimiter has not been explicitly set, Chilkat detects it while loading
	// the first CSV data and updates this property with the detected character. The
	// detection may examine more than the first record. Once selected or detected, the
	// delimiter remains in effect for subsequent loads performed by the same object.
	// To load data that uses a different delimiter, explicitly set this property
	// before loading or use a new Csv object.
	// 
	// A semicolon (;) is commonly used in locales where a comma is used as the decimal
	// separator.
	// 
	// Creating a new CSV: Set this property before adding rows or columns when a
	// delimiter other than comma is required.
	// 
	// Vertical-bar delimiter: If this property is explicitly set to |, and
	// EnableQuotes has not been explicitly set, EnableQuotes defaults to false.
	// 
	const char *delimiter(void);
	// Specifies the single character used to separate fields within each CSV record.
	// The default value is a comma (,).
	// 
	// Although this property has a string type, only the first character of a
	// non-empty value is used. Assigning an empty string does not clear or reset the
	// current delimiter.
	// 
	// If the delimiter has not been explicitly set, Chilkat detects it while loading
	// the first CSV data and updates this property with the detected character. The
	// detection may examine more than the first record. Once selected or detected, the
	// delimiter remains in effect for subsequent loads performed by the same object.
	// To load data that uses a different delimiter, explicitly set this property
	// before loading or use a new Csv object.
	// 
	// A semicolon (;) is commonly used in locales where a comma is used as the decimal
	// separator.
	// 
	// Creating a new CSV: Set this property before adding rows or columns when a
	// delimiter other than comma is required.
	// 
	// Vertical-bar delimiter: If this property is explicitly set to |, and
	// EnableQuotes has not been explicitly set, EnableQuotes defaults to false.
	// 
	void put_Delimiter(const char *newVal);

	// Controls whether double quotation marks have their standard CSV meaning when
	// reading and writing data. The default value is true.
	// 
	// When true, a quoted field is treated as one field even when it contains the
	// delimiter, CR, or LF. A double quotation mark inside a quoted field is
	// represented by two consecutive double quotation marks. Fields created by the
	// application are quoted automatically when required.
	// 
	// Chilkat retains whether a field loaded from CSV text was quoted, so quotation
	// marks that were not strictly required may remain when the CSV is saved again.
	// 
	// When false, quotation marks are ordinary characters and do not protect
	// delimiters or line endings. Do not disable quoting when field values can contain
	// the delimiter, quotation marks, CR, or LF, because such values cannot be
	// represented or round-tripped reliably as ordinary delimited text.
	// 
	bool get_EnableQuotes(void);
	// Controls whether double quotation marks have their standard CSV meaning when
	// reading and writing data. The default value is true.
	// 
	// When true, a quoted field is treated as one field even when it contains the
	// delimiter, CR, or LF. A double quotation mark inside a quoted field is
	// represented by two consecutive double quotation marks. Fields created by the
	// application are quoted automatically when required.
	// 
	// Chilkat retains whether a field loaded from CSV text was quoted, so quotation
	// marks that were not strictly required may remain when the CSV is saved again.
	// 
	// When false, quotation marks are ordinary characters and do not protect
	// delimiters or line endings. Do not disable quoting when field values can contain
	// the delimiter, quotation marks, CR, or LF, because such values cannot be
	// represented or round-tripped reliably as ordinary delimited text.
	// 
	void put_EnableQuotes(bool newVal);

	// Controls whether a backslash causes the following character to be treated
	// literally while parsing CSV data. The default value is false.
	// 
	// When true, examples include:
	// 
	//     * \, represents a literal delimiter character.
	//     * \\ represents one backslash.
	//     * \" represents a literal double quotation mark.
	// 
	// This is not C-style escape decoding. For example, \n, \r, and \t produce the
	// literal characters n, r, and t; they do not produce a line feed, carriage
	// return, or tab.
	// 
	// Normal CSV quoting is still used when output fields contain delimiters or line
	// endings.
	// 
	bool get_EscapeBackslash(void);
	// Controls whether a backslash causes the following character to be treated
	// literally while parsing CSV data. The default value is false.
	// 
	// When true, examples include:
	// 
	//     * \, represents a literal delimiter character.
	//     * \\ represents one backslash.
	//     * \" represents a literal double quotation mark.
	// 
	// This is not C-style escape decoding. For example, \n, \r, and \t produce the
	// literal characters n, r, and t; they do not produce a line feed, carriage
	// return, or tab.
	// 
	// Normal CSV quoting is still used when output fields contain delimiters or line
	// endings.
	// 
	void put_EscapeBackslash(bool newVal);

	// Indicates whether the first record is a column-name row rather than a data row.
	// The default value is false.
	// 
	// Set this property to true before loading CSV data when the first record
	// contains column names. Chilkat then stores the first record as the column names
	// and excludes it from NumRows and zero-based data-row indexing.
	// 
	// Changing this property to true after data has already been loaded does not
	// reinterpret the first data row as column names. Calling SetColumnName
	// automatically changes this property to true.
	// 
	// Methods that address a column by name require this property to be true and
	// require the requested name to exist.
	// 
	bool get_HasColumnNames(void);
	// Indicates whether the first record is a column-name row rather than a data row.
	// The default value is false.
	// 
	// Set this property to true before loading CSV data when the first record
	// contains column names. Chilkat then stores the first record as the column names
	// and excludes it from NumRows and zero-based data-row indexing.
	// 
	// Changing this property to true after data has already been loaded does not
	// reinterpret the first data row as column names. Calling SetColumnName
	// automatically changes this property to true.
	// 
	// Methods that address a column by name require this property to be true and
	// require the requested name to exist.
	// 
	void put_HasColumnNames(bool newVal);

	// The number of columns in the first row of the CSV. When HasColumnNames is
	// true, this is the number of column names in the header row.
	// 
	// CSV rows may contain different numbers of fields. Therefore, this property is
	// not necessarily the maximum number of columns found in any row. Use GetNumCols
	// to obtain the number of columns in a particular data row.
	// 
	int get_NumColumns(void);

	// The number of data rows in the CSV.
	// 
	//     * When HasColumnNames is true, the column-name row is not included.
	//     * Interior blank rows are included.
	//     * Empty or whitespace-only rows following the last non-empty row are not
	//     included.
	int get_NumRows(void);

	// Provides optional keywords for uncommon CSV-processing requirements. The default
	// value is an empty string, and this property should normally remain empty. To
	// enable more than one option, use a comma-separated list.
	// 
	// The following keywords are defined:
	// 
	//     * QuotedCells (v9.5.0.96) — Encloses every data cell in double quotation
	//     marks when writing the CSV.
	//     * QuotedColumnNames (v9.5.0.96) — Encloses every column name in double
	//     quotation marks when writing the CSV.
	//     * EMIT_BOM (v9.5.0.93) — Writes a UTF-8 byte order mark when saving a UTF-8
	//     encoded CSV file.
	void get_UncommonOptions(CkString &str);
	// Provides optional keywords for uncommon CSV-processing requirements. The default
	// value is an empty string, and this property should normally remain empty. To
	// enable more than one option, use a comma-separated list.
	// 
	// The following keywords are defined:
	// 
	//     * QuotedCells (v9.5.0.96) — Encloses every data cell in double quotation
	//     marks when writing the CSV.
	//     * QuotedColumnNames (v9.5.0.96) — Encloses every column name in double
	//     quotation marks when writing the CSV.
	//     * EMIT_BOM (v9.5.0.93) — Writes a UTF-8 byte order mark when saving a UTF-8
	//     encoded CSV file.
	const char *uncommonOptions(void);
	// Provides optional keywords for uncommon CSV-processing requirements. The default
	// value is an empty string, and this property should normally remain empty. To
	// enable more than one option, use a comma-separated list.
	// 
	// The following keywords are defined:
	// 
	//     * QuotedCells (v9.5.0.96) — Encloses every data cell in double quotation
	//     marks when writing the CSV.
	//     * QuotedColumnNames (v9.5.0.96) — Encloses every column name in double
	//     quotation marks when writing the CSV.
	//     * EMIT_BOM (v9.5.0.93) — Writes a UTF-8 byte order mark when saving a UTF-8
	//     encoded CSV file.
	void put_UncommonOptions(const char *newVal);

	// Specifies the date format used when converting Excel date cells from an.xlsx
	// worksheet to CSV text.
	// 
	// The default value is mm-dd-yy. Other formats include d/m/yyyy, m/d/yyyy, and
	// similar Excel-style date-format patterns.
	// 
	void get_XlsxDateFormat(CkString &str);
	// Specifies the date format used when converting Excel date cells from an.xlsx
	// worksheet to CSV text.
	// 
	// The default value is mm-dd-yy. Other formats include d/m/yyyy, m/d/yyyy, and
	// similar Excel-style date-format patterns.
	// 
	const char *xlsxDateFormat(void);
	// Specifies the date format used when converting Excel date cells from an.xlsx
	// worksheet to CSV text.
	// 
	// The default value is mm-dd-yy. Other formats include d/m/yyyy, m/d/yyyy, and
	// similar Excel-style date-format patterns.
	// 
	void put_XlsxDateFormat(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Deletes the column at zero-based index index. The deletion is applied to the
	// column-name row, when present, and to each data row that contains that column.
	// 
	// index must not be negative. For predictable deletion, index should be less than
	// NumColumns.
	// 
	bool DeleteColumn(int index);


	// Deletes the column named by columnName. This method requires HasColumnNames to be
	// true.
	// 
	// Column-name matching is case-sensitive. Surrounding whitespace in a loaded
	// column name is not part of its lookup name. Column names should be unique to
	// avoid ambiguous lookup and deletion behavior.
	// 
	bool DeleteColumnByName(const char *columnName);


	// Deletes the data row at zero-based index index. The first data row is at index 0,
	// regardless of whether a column-name row exists.
	// 
	// index must be between 0 and NumRows - 1.
	// 
	bool DeleteRow(int index);


	// Returns the contents of the cell at data row row and column col.
	// 
	// Row and column indexes are zero-based. The upper-left data cell is at row 0,
	// column 0. When HasColumnNames is true, the header row is not included in the
	// row index.
	// 
	//     * If row is negative or beyond the available data rows, _NULL_ is returned
	//     and LastMethodSuccess is false.
	//     * If col is negative, _NULL_ is returned and LastMethodSuccess is false.
	//     * If row is valid but col is beyond the number of fields in that row, an
	//     empty string is returned and LastMethodSuccess is true.
	// 
	// When AutoTrim is true, surrounding whitespace is removed from the returned
	// value without changing the stored cell content.
	// 
	bool GetCell(int row, int col, CkString &outStr);

	// Returns the contents of the cell at data row row and column col.
	// 
	// Row and column indexes are zero-based. The upper-left data cell is at row 0,
	// column 0. When HasColumnNames is true, the header row is not included in the
	// row index.
	// 
	//     * If row is negative or beyond the available data rows, _NULL_ is returned
	//     and LastMethodSuccess is false.
	//     * If col is negative, _NULL_ is returned and LastMethodSuccess is false.
	//     * If row is valid but col is beyond the number of fields in that row, an
	//     empty string is returned and LastMethodSuccess is true.
	// 
	// When AutoTrim is true, surrounding whitespace is removed from the returned
	// value without changing the stored cell content.
	// 
	const char *getCell(int row, int col);
	// Returns the contents of the cell at data row row and column col.
	// 
	// Row and column indexes are zero-based. The upper-left data cell is at row 0,
	// column 0. When HasColumnNames is true, the header row is not included in the
	// row index.
	// 
	//     * If row is negative or beyond the available data rows, _NULL_ is returned
	//     and LastMethodSuccess is false.
	//     * If col is negative, _NULL_ is returned and LastMethodSuccess is false.
	//     * If row is valid but col is beyond the number of fields in that row, an
	//     empty string is returned and LastMethodSuccess is true.
	// 
	// When AutoTrim is true, surrounding whitespace is removed from the returned
	// value without changing the stored cell content.
	// 
	const char *cell(int row, int col);


	// Returns the contents of the cell at data row rowIndex in the column named by columnName.
	// Row indexing begins at 0 and excludes the header row.
	// 
	// This method requires HasColumnNames to be true. Column-name matching is
	// case-sensitive. Surrounding whitespace is removed from column names for lookup
	// purposes, so columnName should contain the trimmed name. If duplicate lookup names
	// exist, the last matching column is used.
	// 
	// If the row or column name is invalid, _NULL_ is returned and LastMethodSuccess
	// is false. When AutoTrim is true, surrounding whitespace is removed from the
	// returned cell value.
	// 
	bool GetCellByName(int rowIndex, const char *columnName, CkString &outStr);

	// Returns the contents of the cell at data row rowIndex in the column named by columnName.
	// Row indexing begins at 0 and excludes the header row.
	// 
	// This method requires HasColumnNames to be true. Column-name matching is
	// case-sensitive. Surrounding whitespace is removed from column names for lookup
	// purposes, so columnName should contain the trimmed name. If duplicate lookup names
	// exist, the last matching column is used.
	// 
	// If the row or column name is invalid, _NULL_ is returned and LastMethodSuccess
	// is false. When AutoTrim is true, surrounding whitespace is removed from the
	// returned cell value.
	// 
	const char *getCellByName(int rowIndex, const char *columnName);
	// Returns the contents of the cell at data row rowIndex in the column named by columnName.
	// Row indexing begins at 0 and excludes the header row.
	// 
	// This method requires HasColumnNames to be true. Column-name matching is
	// case-sensitive. Surrounding whitespace is removed from column names for lookup
	// purposes, so columnName should contain the trimmed name. If duplicate lookup names
	// exist, the last matching column is used.
	// 
	// If the row or column name is invalid, _NULL_ is returned and LastMethodSuccess
	// is false. When AutoTrim is true, surrounding whitespace is removed from the
	// returned cell value.
	// 
	const char *cellByName(int rowIndex, const char *columnName);


	// Returns the original, untrimmed name of the column at zero-based index index. The
	// first column is at index 0.
	// 
	bool GetColumnName(int index, CkString &outStr);

	// Returns the original, untrimmed name of the column at zero-based index index. The
	// first column is at index 0.
	// 
	const char *getColumnName(int index);
	// Returns the original, untrimmed name of the column at zero-based index index. The
	// first column is at index 0.
	// 
	const char *columnName(int index);


	// Returns the zero-based index of the column named by columnName, or -1 if no matching
	// column exists.
	// 
	// This method requires HasColumnNames to be true. Matching is case-sensitive.
	// Surrounding whitespace is removed from loaded column names for lookup purposes,
	// so columnName should contain the trimmed name. If duplicate lookup names exist, the
	// index of the last matching column is returned.
	// 
	int GetIndex(const char *columnName);


	// Returns the number of fields in the data row at zero-based index row. This is
	// useful for CSV data containing rows of different lengths.
	// 
	// Returns 0 if row is negative or beyond the available data rows.
	// 
	int GetNumCols(int row);


	// Inserts one empty field into each existing row and, when present, into the
	// column-name row. index is a zero-based insertion position.
	// 
	//     * If index is within a row, the empty field is inserted before that position.
	//     * If index is at or beyond the end of a row, one empty field is appended to
	//     that row.
	//     * Rows are not padded to a common width, so ragged rows remain ragged.
	//     * Calling this method on an object with no rows and no column-name row has
	//     no effect.
	// 
	// index must not be negative.
	// 
	bool InsertColumn(int index);


	// Clears the current contents and loads CSV data from the file specified by path.
	// Set HasColumnNames, Delimiter, EnableQuotes, and other parsing options before
	// calling this method.
	// 
	// On Windows, the file is decoded using the current Windows ANSI code page. Use
	// LoadFile2 when the character encoding must be specified explicitly.
	// 
	// The existing CSV contents are cleared before the file is opened. Therefore, a
	// failure such as a missing file does not preserve the previously loaded data.
	// 
	bool LoadFile(const char *path);


	// Clears the current contents and loads CSV data from the file specified by filename.
	// charset specifies the character encoding used by the file.
	// 
	// Set HasColumnNames, Delimiter, EnableQuotes, and other parsing options before
	// calling this method.
	// 
	// See Supported Charsets[1] for the encoding names recognized by Chilkat.
	// 
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool LoadFile2(const char *filename, const char *charset);


	// Clears the current contents and loads the CSV text contained in csvData. Set
	// HasColumnNames, Delimiter, EnableQuotes, and other parsing options before
	// calling this method.
	// 
	// Passing an empty string successfully clears the CSV. The parser is permissive;
	// for example, an unterminated quoted field extends through the end of csvData rather
	// than necessarily causing the load to fail.
	// 
	bool LoadFromString(const char *csvData);


	// Compares the complete data row at zero-based index rowIndex with the wildcard
	// pattern in matchPattern. The row is compared as one delimited record using the current
	// Delimiter; the pattern may therefore include or span field separators.
	// 
	//     * The asterisk character (*) may appear any number of times and matches zero
	//     or more characters.
	//     * When caseSensitive is true, matching is case-sensitive.
	//     * When caseSensitive is false, matching is case-insensitive.
	//     * AutoTrim does not alter the row used for matching.
	// 
	// Returns true when the row matches matchPattern. Returns false when it does not match
	// or when rowIndex is outside the available data rows.
	// 
	bool RowMatches(int rowIndex, const char *matchPattern, bool caseSensitive);


	// Writes the entire CSV to the file specified by path.
	// 
	// On Windows, the text is encoded using the current Windows ANSI code page. Use
	// SaveFile2 when the output encoding must be specified explicitly.
	// 
	// Record endings are controlled by Crlf, and the final record is also followed by
	// the selected line ending.
	// 
	bool SaveFile(const char *path);


	// Writes the entire CSV to the file specified by filename. charset specifies the output
	// character encoding, and Chilkat converts the CSV text to that encoding while
	// saving.
	// 
	// Record endings are controlled by Crlf, and the final record is also followed by
	// the selected line ending.
	// 
	// See Supported Charsets[1] for the encoding names recognized by Chilkat.
	// 
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool SaveFile2(const char *filename, const char *charset);


	// Clears sb and writes the entire CSV document into it.
	// 
	// Record endings are controlled by Crlf. sb contains a line ending after the
	// final record.
	// 
	bool SaveToSb(CkStringBuilder &sb);


	// Returns the entire CSV document as a string.
	// 
	// Record endings are controlled by Crlf. The returned string includes a line
	// ending after the final record. The line-ending style originally loaded into the
	// object is not preserved.
	// 
	bool SaveToString(CkString &outStr);

	// Returns the entire CSV document as a string.
	// 
	// Record endings are controlled by Crlf. The returned string includes a line
	// ending after the final record. The line-ending style originally loaded into the
	// object is not preserved.
	// 
	const char *saveToString(void);

	// Sets the cell at zero-based data row row and column col to content.
	// 
	// The CSV grows as needed. If row is beyond the current last row, intervening
	// rows are created as empty rows. Within the target row, intervening columns are
	// created as empty cells. Other rows are not padded, so the resulting CSV may
	// contain rows with different numbers of fields. Passing NumRows as row appends a
	// new data row.
	// 
	// content may contain delimiters, quotation marks, CR, and LF when EnableQuotes is
	// true; Chilkat applies the necessary CSV quoting when the data is saved. row
	// and col must not be negative.
	// 
	bool SetCell(int row, int col, const char *content);


	// Sets the cell at zero-based data row rowIndex in the column named by columnName to contentStr.
	// 
	// This method requires HasColumnNames to be true and requires columnName to match an
	// existing column name. Matching is case-sensitive and uses the trimmed lookup
	// form of the stored column name. A missing column is not created.
	// 
	// The data-row collection grows as needed. contentStr may contain delimiters, quotation
	// marks, CR, and LF when EnableQuotes is true.
	// 
	bool SetCellByName(int rowIndex, const char *columnName, const char *contentStr);


	// Sets the name of the column at zero-based index index to columnName. The first column
	// is at index 0.
	// 
	// Calling this method automatically sets HasColumnNames to true. It can
	// therefore be used on an empty object to create the column-name row. index must
	// not be negative.
	// 
	// For reliable name-based access, use unique column names without surrounding
	// whitespace.
	// 
	bool SetColumnName(int index, const char *columnName);


	// Sorts the data rows using the values in the column named by columnName. The
	// column-name row is not moved.
	// 
	//     * When ascending is true, rows are sorted in ascending order.
	//     * When ascending is false, rows are sorted in descending order.
	//     * When caseSensitive is true, comparisons are case-sensitive.
	//     * When caseSensitive is false, comparisons are case-insensitive.
	// 
	// Values are compared as strings, not as numbers or dates. For example, ascending
	// order places 10 before 2. Empty or missing sort cells appear first in ascending
	// order and last in descending order. The sort is not stable, so rows having equal
	// sort values may change relative order.
	// 
	// This method requires HasColumnNames to be true and columnName to name an existing
	// column.
	// 
	bool SortByColumn(const char *columnName, bool ascending, bool caseSensitive);


	// Sorts the data rows using the values in the column at zero-based index index. The
	// column-name row, when present, is not moved.
	// 
	//     * When ascending is true, rows are sorted in ascending order.
	//     * When ascending is false, rows are sorted in descending order.
	//     * When caseSensitive is true, comparisons are case-sensitive.
	//     * When caseSensitive is false, comparisons are case-insensitive.
	// 
	// Values are compared as strings, not as numbers or dates. Empty and missing sort
	// cells are treated as empty strings. They appear first in ascending order and
	// last in descending order. The sort is not stable, so rows having equal sort
	// values may change relative order.
	// 
	bool SortByColumnIndex(int index, bool ascending, bool caseSensitive);


	// Gets the worksheet names contained in an Excel.xlsx workbook.
	// 
	//     * xlsx is a Zip object containing the already-opened.xlsx file.
	//     * sheetNames receives the worksheet names.
	bool XlsxGetSheets(CkZip &xlsx, CkStringTable &sheetNames);


	// Loads a worksheet from an Excel.xlsx workbook into this CSV object.
	// 
	//     * zip is a Zip object containing the already-opened.xlsx file.
	//     * sheetName is the worksheet name.
	//     * Pass an empty string in sheetName to load the workbook's default worksheet.
	// 
	// The XlsxDateFormat property controls the text format used for Excel date cells.
	// 
	bool XlsxLoadSheet(CkZip &zip, const char *sheetName);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
